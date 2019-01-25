/*
 * Copyright (C) 2009 Sergey Kubushyn <ksi@koi8.net>
 *
 * Changes for multibus/multiadapter I2C support.
 *
 * (C) Copyright 2000
 * Paolo Scaffardi, AIRVENT SAM s.p.a - RIMINI(ITALY), arsenio@tin.it
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <config.h>
#include <common.h>
#include <stdarg.h>
#include <malloc.h>
#include <stdio_dev.h>
#include <serial.h>
#ifdef CONFIG_LOGBUFFER
#include <logbuff.h>
#endif

#if defined(CONFIG_HARD_I2C) || defined(CONFIG_SYS_I2C)
#include <i2c.h>
#endif
#include <chipram_env.h>

DECLARE_GLOBAL_DATA_PTR;

static struct stdio_dev devs;
struct stdio_dev *stdio_devices[] = { NULL, NULL, NULL };
char *stdio_names[MAX_FILES] = { "stdin", "stdout", "stderr" };

#if defined(CONFIG_SPLASH_SCREEN) && !defined(CONFIG_SYS_DEVICE_NULLDEV)
#define	CONFIG_SYS_DEVICE_NULLDEV	1
#endif


#ifdef CONFIG_SYS_DEVICE_NULLDEV
void nulldev_putc(const char c)
{
	/* nulldev is empty! */
}

void nulldev_puts(const char *s)
{
	/* nulldev is empty! */
}

int nulldev_input(void)
{
	/* nulldev is empty! */
	return 0;
}
#endif

/**************************************************************************
 * SYSTEM DRIVERS
 **************************************************************************
 */

static void drv_system_init (void)
{
	struct stdio_dev dev;

	memset (&dev, 0, sizeof (dev));

	strcpy (dev.name, "serial");
	dev.flags = DEV_FLAGS_OUTPUT | DEV_FLAGS_INPUT | DEV_FLAGS_SYSTEM;
	dev.putc = serial_putc;
	dev.puts = serial_puts;
	dev.getc = serial_getc;
	dev.tstc = serial_tstc;
	stdio_register (&dev);

#ifdef CONFIG_SYS_DEVICE_NULLDEV
	memset (&dev, 0, sizeof (dev));

	strcpy (dev.name, "nulldev");
	dev.flags = DEV_FLAGS_OUTPUT | DEV_FLAGS_INPUT | DEV_FLAGS_SYSTEM;
	dev.putc = nulldev_putc;
	dev.puts = nulldev_puts;
	dev.getc = nulldev_input;
	dev.tstc = nulldev_input;

	stdio_register (&dev);
#endif
}

/**************************************************************************
 * DEVICES
 **************************************************************************
 */
struct list_head* stdio_get_list(void)
{
	return &(devs.list);
}

struct stdio_dev* stdio_get_by_name(const char *name)
{
	struct list_head *pos;
	struct stdio_dev *dev;

	if(!name)
		return NULL;

	list_for_each(pos, &(devs.list)) {
		dev = list_entry(pos, struct stdio_dev, list);
		if(strcmp(dev->name, name) == 0)
			return dev;
	}

	return NULL;
}

struct stdio_dev* stdio_clone(struct stdio_dev *dev)
{
	struct stdio_dev *_dev;

	if(!dev)
		return NULL;

	_dev = calloc(1, sizeof(struct stdio_dev));

	if(!_dev)
		return NULL;

	memcpy(_dev, dev, sizeof(struct stdio_dev));

	return _dev;
}

int stdio_register (struct stdio_dev * dev)
{
	struct stdio_dev *_dev;

	_dev = stdio_clone(dev);
	if(!_dev)
		return -1;
	list_add_tail(&(_dev->list), &(devs.list));
	return 0;
}

/* deregister the device "devname".
 * returns 0 if success, -1 if device is assigned and 1 if devname not found
 */
#ifdef	CONFIG_SYS_STDIO_DEREGISTER
int stdio_deregister(const char *devname)
{
	int l;
	struct list_head *pos;
	struct stdio_dev *dev;
	char temp_names[3][16];

	dev = stdio_get_by_name(devname);

	if(!dev) /* device not found */
		return -1;
	/* get stdio devices (ListRemoveItem changes the dev list) */
	for (l=0 ; l< MAX_FILES; l++) {
		if (stdio_devices[l] == dev) {
			/* Device is assigned -> report error */
			return -1;
		}
		memcpy (&temp_names[l][0],
			stdio_devices[l]->name,
			sizeof(temp_names[l]));
	}

	list_del(&(dev->list));

	/* reassign Device list */
	list_for_each(pos, &(devs.list)) {
		dev = list_entry(pos, struct stdio_dev, list);
		for (l=0 ; l< MAX_FILES; l++) {
			if(strcmp(dev->name, temp_names[l]) == 0)
				stdio_devices[l] = dev;
		}
	}
	return 0;
}
#endif	/* CONFIG_SYS_STDIO_DEREGISTER */

int stdio_init (void)
{
	boot_mode_t boot_role = get_boot_role();

#if defined(CONFIG_NEEDS_MANUAL_RELOC)
	/* already relocated for current ARM implementation */
	ulong relocation_offset = gd->reloc_off;
	int i;

	/* relocate device name pointers */
	for (i = 0; i < (sizeof (stdio_names) / sizeof (char *)); ++i) {
		stdio_names[i] = (char *) (((ulong) stdio_names[i]) +
						relocation_offset);
	}
#endif /* CONFIG_NEEDS_MANUAL_RELOC */

	/* Initialize the list */
	INIT_LIST_HEAD(&(devs.list));

#ifdef CONFIG_SYS_I2C
	i2c_init_all();
#else
#if defined(CONFIG_HARD_I2C)
	i2c_init (CONFIG_SYS_I2C_SPEED, CONFIG_SYS_I2C_SLAVE);
#endif
#endif
#ifdef CONFIG_LCD
if(boot_role == BOOTLOADER_MODE_LOAD)
	drv_lcd_init ();
#endif
#if defined(CONFIG_VIDEO) || defined(CONFIG_CFB_CONSOLE)
	drv_video_init ();
#endif
#ifdef CONFIG_KEYBOARD
	drv_keyboard_init ();
#endif
#ifdef CONFIG_LOGBUFFER
	drv_logbuff_init ();
#endif
	drv_system_init ();
	serial_stdio_init ();
#ifdef CONFIG_USB_TTY
	drv_usbtty_init ();
#endif
#ifdef CONFIG_NETCONSOLE
	drv_nc_init ();
#endif
#ifdef CONFIG_JTAG_CONSOLE
	drv_jtag_console_init ();
#endif
#ifdef CONFIG_CBMEM_CONSOLE
	cbmemc_init();
#endif
	return (0);
}
