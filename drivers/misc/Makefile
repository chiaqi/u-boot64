#
# (C) Copyright 2000-2007
# Wolfgang Denk, DENX Software Engineering, wd@denx.de.
#
# SPDX-License-Identifier:	GPL-2.0+
#

obj-$(CONFIG_ALI152X) += ali512x.o
obj-$(CONFIG_DS4510)  += ds4510.o
obj-$(CONFIG_CBMEM_CONSOLE) += cbmem_console.o
obj-$(CONFIG_CROS_EC) += cros_ec.o
obj-$(CONFIG_CROS_EC_LPC) += cros_ec_lpc.o
obj-$(CONFIG_CROS_EC_I2C) += cros_ec_i2c.o
obj-$(CONFIG_CROS_EC_SPI) += cros_ec_spi.o
obj-$(CONFIG_FSL_IIM) += fsl_iim.o
obj-$(CONFIG_GPIO_LED) += gpio_led.o
obj-$(CONFIG_FSL_MC9SDZ60) += mc9sdz60.o
obj-$(CONFIG_MXC_OCOTP) += mxc_ocotp.o
obj-$(CONFIG_NS87308) += ns87308.o
obj-$(CONFIG_PDSP188x) += pdsp188x.o
obj-$(CONFIG_STATUS_LED) += status_led.o
obj-$(CONFIG_TWL4030_LED) += twl4030_led.o
obj-$(CONFIG_FSL_IFC) += fsl_ifc.o
obj-$(CONFIG_SPRD_ADI) += adi.o
obj-$(CONFIG_SPRD_ADC) += adc.o
obj-$(CONFIG_SECURE_EFUSE) += arm7_efuse.o
ifneq ($(CONFIG_ADIE_SC2723)$(CONFIG_ADIE_SC2723S)$(CONFIG_ADIE_SC2731),)
obj-y += otp_helper.o ana_efuse.o efuse.o
else
obj-y += otp_helper.o efuse.o
endif
