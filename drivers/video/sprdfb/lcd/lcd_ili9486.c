/* drivers/video/sc8810/lcd_ili9486.c
 *
 * Support for ili9486 LCD device
 *
 * Copyright (C) 2010 Spreadtrum
 *
 */

#include <asm/arch/sprd_lcd.h>

#define printk printf

#define  LCD_DEBUG
#ifdef LCD_DEBUG
#define LCD_PRINT printk
#else
#define LCD_PRINT(...)
#endif

static int32_t ili9486_init(struct panel_spec *self)
{
	send_data_t send_cmd = self->info.mcu->ops->send_cmd;
	send_data_t send_data = self->info.mcu->ops->send_data;

	LCD_PRINT("ili9486_init\n");
#if 0
	// Hidden register setting
	send_cmd(0xF9);
	send_data(0x00);
	send_data(0x08);

	send_cmd(0xF2);
	send_data(0x18);
	send_data(0xA3);
	send_data(0x02);
	send_data(0x02);
	send_data(0xB2);
	send_data(0x12);
	send_data(0xFF);
	send_data(0x10);
	send_data(0x00);

	send_cmd(0xF1);
	send_data(0x36);
	send_data(0x04);
	send_data(0x00);
	send_data(0x3C);
	send_data(0x0F);
	send_data(0x8F);
#endif
	//Power setting sequence
	send_cmd(0xC0);
	send_data(0x0B);
	send_data(0x0B);

	send_cmd(0xC1);
	send_data(0x45);

	send_cmd(0xC2);
	send_data(0x22);

	LCD_DelayMS(150); // 150ms

	//Display parameter setting
	send_cmd(0x2A);
	send_data(0x00);
	send_data(0x00);
	send_data(0x01);
	send_data(0x3F);

	send_cmd(0x2B);
	send_data(0x00);
	send_data(0x00);
	send_data(0x01);
	send_data(0xDF);

	send_cmd(0xB1);
	send_data(0xB0);
	send_data(0x12);//11: 67hz, 12:63.5hz

	send_cmd(0xB4);
	send_data(0x02);

	send_cmd(0xB5);
	send_data(0x08);
	send_data(0x0C);
	send_data(0x10);
	send_data(0x0A);

	send_cmd(0xB6);
	send_data(0x02);
	send_data(0x22);//0x42
	send_data(0x3B);

	send_cmd(0xB7);
	send_data(0xC6);

	send_cmd(0xF2);
	send_data(0x18);
	send_data(0xA3);
	send_data(0x12);
	send_data(0x02);
	send_data(0xB2);
	send_data(0x12);
	send_data(0xFF);
	send_data(0x10);
	send_data(0x00);

	send_cmd(0xF4);
	send_data(0x00);
	send_data(0x00);
	send_data(0x08);
	send_data(0x91);
	send_data(0x04);

	send_cmd(0x3A);
	send_data(0x06);

	send_cmd(0x35);

	send_cmd(0x36);
	send_data(0xD8);//0xC8

	send_cmd(0x44);
	send_data(0x01);
	send_data(0xD5);

	//Gamma setting
	send_cmd(0xF8);
	send_data(0x21);
	send_data(0x06);

	send_cmd(0xE0);
	send_data(0x0F);
	send_data(0x18);
	send_data(0x13);
	send_data(0x08);
	send_data(0x0B);
	send_data(0x07);
	send_data(0x4A);
	send_data(0xA7);
	send_data(0x3A);
	send_data(0x0C);
	send_data(0x16);
	send_data(0x07);
	send_data(0x09);
	send_data(0x06);
	send_data(0x00);

	send_cmd(0xE1);
	send_data(0x0F);
	send_data(0x34);
	send_data(0x31);
	send_data(0x09);
	send_data(0x0B);
	send_data(0x02);
	send_data(0x41);
	send_data(0x53);
	send_data(0x30);
	send_data(0x04);
	send_data(0x0F);
	send_data(0x02);
	send_data(0x17);
	send_data(0x14);
	send_data(0x00);

	send_cmd(0xE2);
	send_data(0x19);
	send_data(0x19);
	send_data(0x19);
	send_data(0x19);
	send_data(0x19);
	send_data(0x19);
	send_data(0x1A);
	send_data(0x1A);
	send_data(0x1A);
	send_data(0x1A);
	send_data(0x1A);
	send_data(0x1A);
	send_data(0x19);
	send_data(0x19);
	send_data(0x09);
	send_data(0x09);

	send_cmd(0xE3);
	send_data(0x04);
	send_data(0x04);
	send_data(0x04);
	send_data(0x04);
	send_data(0x04);
	send_data(0x04);
	send_data(0x04);
	send_data(0x04);
	send_data(0x04);
	send_data(0x04);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x24);
	send_data(0x25);
	send_data(0x3D);
	send_data(0x4D);
	send_data(0x4D);
	send_data(0x4D);
	send_data(0x4C);
	send_data(0x7C);
	send_data(0x6D);
	send_data(0x6D);
	send_data(0x7D);
	send_data(0x6D);
	send_data(0x6E);
	send_data(0x6D);
	send_data(0x6D);
	send_data(0x6D);
	send_data(0x6D);
	send_data(0x6D);
	send_data(0x5C);
	send_data(0x5C);
	send_data(0x5C);
	send_data(0x6B);
	send_data(0x6B);
	send_data(0x6A);
	send_data(0x5B);
	send_data(0x5B);
	send_data(0x53);
	send_data(0x53);
	send_data(0x53);
	send_data(0x53);
	send_data(0x53);
	send_data(0x53);
	send_data(0x43);
	send_data(0x33);
	send_data(0xB4);
	send_data(0x94);
	send_data(0x74);
	send_data(0x64);
	send_data(0x64);
	send_data(0x43);
	send_data(0x13);
	send_data(0x24);
#if 1
        //Display on
	send_cmd(0x11); // (SLPOUT)

	LCD_DelayMS(120); // 100ms

	send_cmd(0x29); // (DISPON)

	LCD_DelayMS(100); // 100ms
#else
	if (1) { //  for test the lcd
		int i;
		send_cmd(0x2C); //Write data
		for (i = 0; i < 480*320/3; i++)
			send_data(0xff);
		for (i = 0; i < 480*320/3; i++)
			send_data(0xff00);
		for (i = 0; i < 480*320/3; i++)
			send_data(0xff0000);
	}
        //Display on
	send_cmd(0x11); // (SLPOUT)
	LCD_DelayMS(120); // 100ms
	send_cmd(0x29); //Display On
	LCD_DelayMS(120); //120ms
	send_cmd(0x2C); //Write data
	LCD_DelayMS(1200); //120ms
#endif
	LCD_PRINT("ili9486_init: end\n");

	return 0;
}

static int32_t ili9486_set_window(struct panel_spec *self,
		uint16_t left, uint16_t top, uint16_t right, uint16_t bottom)
{
	send_data_t send_cmd = self->info.mcu->ops->send_cmd;
	send_data_t send_data = self->info.mcu->ops->send_data;

	LCD_PRINT("ili9486_set_window\n");

	send_cmd(0x2A); // col
	send_data((left >> 8));
	send_data((left & 0xFF));
	send_data((right >> 8));
	send_data((right & 0xFF));

	send_cmd(0x2B); // row
	send_data((top >> 8));
	send_data((top & 0xFF));
	send_data((bottom >> 8));
	send_data((bottom & 0xFF));

	send_cmd(0x2C);

	return 0;
}


static int32_t ili9486_invalidate(struct panel_spec *self)
{
	LCD_PRINT("ili9486_invalidate\n");

	return self->ops->panel_set_window(self, 0, 0,
			self->width-1, self->height-1);
}

static int32_t ili9486_invalidate_rect(struct panel_spec *self,
				uint16_t left, uint16_t top,
				uint16_t right, uint16_t bottom)
{

	LCD_PRINT("ili9486_invalidate_rect : (%d, %d, %d, %d)\n",left, top, right, bottom);


	return self->ops->panel_set_window(self, left, top,
			right, bottom);
}

static int32_t ili9486_set_direction(struct panel_spec *self, uint16_t direction)
{

	LCD_PRINT("ili9486_set_direction\n");
	return 0;
}

static int32_t ili9486_enter_sleep(struct panel_spec *self, uint8_t is_sleep)
{
	send_data_t send_cmd = self->info.mcu->ops->send_cmd;

	if(is_sleep) {
		//send_cmd(0x10);
		LCD_DelayMS(120);
	}
	else {
		//send_cmd(0x11);
		LCD_DelayMS(120);
	}
	return 0;
}

static int32_t ili9486_read_id(struct panel_spec *self)
{
	int32_t read_value = 0;
	send_data_t send_cmd = self->info.mcu->ops->send_cmd;
	read_data_t read_data = self->info.mcu->ops->read_data;

	send_cmd(0x04);

	read_data();
	read_value += read_data()<< 16;
	read_value += read_data()<< 8;
	read_value += read_data();

	LCD_PRINT("ili9486_read_id=%x\n",read_value);
    read_value = 0x9486;
	return read_value;
}

static struct panel_operations lcd_ili9486_operations = {
	.panel_init            = ili9486_init,
	.panel_set_window      = ili9486_set_window,
	.panel_invalidate      = ili9486_invalidate,
	//.lcd_invalidate_rect = ili9486_invalidate_rect,
	.panel_set_direction   = ili9486_set_direction,
	.panel_enter_sleep     = ili9486_enter_sleep,
	.panel_readid         = ili9486_read_id,
};

static struct timing_mcu lcd_ili9486_timing[] = {
	[0] = {
		.rcss = 25,
		.rlpw = 45,
		.rhpw = 90,
		.wcss = 30,
		.wlpw = 20,
		.whpw = 20,
	},
	[1] = {
		.rcss = 25,
		.rlpw = 45,
		.rhpw = 90,
		.wcss = 30,
		.wlpw = 20,
		.whpw = 20,
	}
};

static struct info_mcu lcd_ili9486_info = {
	.bus_mode = LCD_BUS_8080,
	.bus_width = 18,
	.bpp = 18,
	.timing = &lcd_ili9486_timing,
	.ops = NULL,
};

struct panel_spec lcd_panel_ili9486 = {
	.width = 320,
	.height = 480,
	.fps  = 60,
	.type = LCD_MODE_MCU,
	.direction = LCD_DIRECT_NORMAL,
	.info = {
                 .mcu = &lcd_ili9486_info
                },
	.ops = &lcd_ili9486_operations,
};

