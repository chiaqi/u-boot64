/*
 * Copyright (C) 2014-2015 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 */

#ifndef __ASM_ARCH_HARDWARE_SC9820_H
#define __ASM_ARCH_HARDWARE_SC9820_H

/*
 * 9630 internal I/O mappings
 * 0x30000000-0x50000000 AON.
 * We have the following mapping according to asic spec.
 * We have set some trap gaps in the vaddr.
 */
#define SCI_IOMAP_BASE	0xF5000000

#define SCI_IOMAP(x)	(SCI_IOMAP_BASE + (x))

#define SCI_IOMEMMAP_BASE	0xcc800000
#define SCI_IOMEMMAP(x)	(SCI_IOMEMMAP_BASE + (x))
#ifndef SCI_ADDR
#define SCI_ADDR(_b_, _o_)                              ( (u32)(_b_) + (_o_) )
#endif

#define LL_DEBUG_UART_PHYS		SPRD_UART1_PHYS
#define LL_DEBUG_UART_BASE		SPRD_UART1_BASE

//8830 mapping begin. From [0xEB000000 -- ]
#define SPRD_CORESIGHT_BASE		SPRD_CORESIGHT_PHYS
#define SPRD_CORESIGHT_PHYS		0x10000000
#define SPRD_CORESIGHT_SIZE		SZ_64K

#define SPRD_CORE_BASE			SPRD_CORE_PHYS
#define SPRD_CORE_PHYS			0x12000000
#define SPRD_CORE_SIZE			SZ_64K

#define SPRD_DMA0_BASE			SPRD_DMA0_PHYS
#define SPRD_DMA0_PHYS			0X20100000
#define SPRD_DMA0_SIZE			SZ_16K

#define SPRD_USB_BASE			SPRD_USB_PHYS
#define SPRD_USB_PHYS			0X20200000
#define SPRD_USB_SIZE			SZ_4K

#define SPRD_SDIO0_BASE			SPRD_SDIO0_PHYS
#define SPRD_SDIO0_PHYS			0X20300000
#define SPRD_SDIO0_SIZE			SZ_4K

#define SPRD_SDIO1_BASE			SPRD_SDIO1_PHYS
#define SPRD_SDIO1_PHYS			0X20400000
#define SPRD_SDIO1_SIZE			SZ_4K

#define SPRD_SDIO2_BASE			SPRD_SDIO2_PHYS
#define SPRD_SDIO2_PHYS			0X20500000
#define SPRD_SDIO2_SIZE			SZ_4K

#define SPRD_EMMC_BASE			SPRD_EMMC_PHYS
#define SPRD_EMMC_PHYS			0X20600000
#define SPRD_EMMC_SIZE			SZ_4K

#define SPRD_DRM_BASE			SPRD_DRM_PHYS
#define SPRD_DRM_PHYS			0X20700000
#define SPRD_DRM_SIZE			SZ_4K


#define SPRD_LCDC_BASE			SPRD_LCDC_PHYS
#define SPRD_LCDC_PHYS			0X20800000
#define SPRD_LCDC_SIZE			SZ_4K

#define SPRD_GSP_BASE			SPRD_GSP_PHYS
#define SPRD_GSP_PHYS			0X20A00000
#define SPRD_GSP_SIZE			SZ_4K

#define SPRD_GSPMMU_BASE		SPRD_GSPMMU_PHYS
#define SPRD_GSPMMU_PHYS		0X20B00000
#define SPRD_GSPMMU_SIZE		SZ_4K

#define SPRD_NFC_BASE			SPRD_NFC_PHYS
#define SPRD_NFC_PHYS			0X20C00000
#define SPRD_NFC_SIZE			SZ_4K

#define SPRD_HWLOCK0_BASE		SPRD_HWLOCK0_PHYS
#define SPRD_HWLOCK0_PHYS		0X20D00000
#define SPRD_HWLOCK0_SIZE		SZ_4K

#define SPRD_AHB_BASE			SPRD_AHB_PHYS
#define SPRD_AHB_PHYS			0X20E00000
#define SPRD_AHB_SIZE			SZ_64K

#define SPRD_BM0_BASE			SPRD_BM0_PHYS
#define SPRD_BM0_PHYS			0X20F00000
#define SPRD_BM0_SIZE			SZ_4K

#define SPRD_BM1_BASE			SPRD_BM1_PHYS
#define SPRD_BM1_PHYS			0X21000000
#define SPRD_BM1_SIZE			SZ_4K

#define SPRD_BM2_BASE			SPRD_BM2_PHYS
#define SPRD_BM2_PHYS			0X21100000
#define SPRD_BM2_SIZE			SZ_4K

#define SPRD_ZIPENC_BASE		SPRD_ZIPENC_PHYS
#define SPRD_ZIPENC_PHYS		0X21200000
#define SPRD_ZIPENC_SIZE		(SZ_4K)

#define SPRD_ZIPDEC_BASE		SPRD_ZIPDEC_PHYS
#define SPRD_ZIPDEC_PHYS		0X21300000
#define SPRD_ZIPDEC_SIZE		(SZ_4K)

#define SPRD_USB_HSIC_BASE		SPRD_USB_HSIC_PHYS
#define SPRD_USB_HSIC_PHYS		0X21400000
#define SPRD_USB_HSIC_SIZE		SZ_4K

#define SPRD_APBCKG_BASE		SPRD_APBCKG_PHYS
#define SPRD_APBCKG_PHYS		0X21500000
#define SPRD_APBCKG_SIZE		SZ_4K

#define SPRD_DISPC0_BASE		SPRD_DISPC0_PHYS
#define SPRD_DISPC0_PHYS		0X20800000
#define SPRD_DISPC0_SIZE		SZ_4K

#define SPRD_DSI_BASE			SPRD_DSI_PHYS
#define SPRD_DSI_PHYS			0X21800000
#define SPRD_DSI_SIZE			SZ_4K


#define SPRD_LPDDR2_BASE		SPRD_LPDDR2_PHYS
#define SPRD_LPDDR2_PHYS		0X30000000
#define SPRD_LPDDR2_SIZE		SZ_4K

#define SPRD_LPDDR2_PHY_BASE		SPRD_LPDDR2_PHY_PHYS
#define SPRD_LPDDR2_PHY_PHYS	  	0X30010000
#define SPRD_LPDDR2_PHY_SIZE		SZ_4K

#define SPRD_PUB_BASE			SPRD_PUB_PHYS
#define SPRD_PUB_PHYS			0X30020000
#define SPRD_PUB_SIZE			SZ_64K

#define SPRD_AXIBM0_BASE		SPRD_AXIBM0_PHYS
#define SPRD_AXIBM0_PHYS		0X30040000
#define SPRD_AXIBM0_SIZE		SZ_4K

#define SPRD_AXIBM1_BASE		SPRD_AXIBM1_PHYS
#define SPRD_AXIBM1_PHYS		0X30050000
#define SPRD_AXIBM1_SIZE		(SZ_4K)

#define SPRD_AXIBM2_BASE		SPRD_AXIBM2_PHYS
#define SPRD_AXIBM2_PHYS		0X30060000
#define SPRD_AXIBM2_SIZE		(SZ_4K)

#define SPRD_AXIBM3_BASE		SPRD_AXIBM3_PHYS
#define SPRD_AXIBM3_PHYS		0X30070000
#define SPRD_AXIBM3_SIZE		(SZ_4K)

#define SPRD_AXIBM4_BASE		SPRD_AXIBM4_PHYS
#define SPRD_AXIBM4_PHYS		0X30080000
#define SPRD_AXIBM4_SIZE		(SZ_4K)

#define SPRD_AXIBM5_BASE		SPRD_AXIBM5_PHYS
#define SPRD_AXIBM5_PHYS		0X30090000
#define SPRD_AXIBM5_SIZE		(SZ_4K)

#define SPRD_AXIBM6_BASE		SPRD_AXIBM6_PHYS
#define SPRD_AXIBM6_PHYS		0X300A0000
#define SPRD_AXIBM6_SIZE		(SZ_4K)

#define SPRD_AXIBM7_BASE		SPRD_AXIBM7_PHYS
#define SPRD_AXIBM7_PHYS		0X300B0000
#define SPRD_AXIBM7_SIZE		(SZ_4K)

#define SPRD_AXIBM8_BASE		SPRD_AXIBM8_PHYS
#define SPRD_AXIBM8_PHYS		0X300C0000
#define SPRD_AXIBM8_SIZE		(SZ_4K)


#define SPRD_AUDIO_BASE			SPRD_AUDIO_PHYS
#define SPRD_AUDIO_PHYS			0X40000000
#define SPRD_AUDIO_SIZE			SZ_8K

#define SPRD_AUDIO_IF_BASE		SPRD_AUDIO_IF_PHYS
#define SPRD_AUDIO_IF_PHYS		0X40010000
#define SPRD_AUDIO_IF_SIZE		SZ_4K

#define SPRD_VBC_BASE			SPRD_VBC_PHYS
#define SPRD_VBC_PHYS			0X40020000
#define SPRD_VBC_SIZE			SZ_4K + SZ_8K

#define SPRD_ADI_BASE			SPRD_ADI_PHYS
#define SPRD_ADI_PHYS			0X40030000
#define SPRD_ADI_SIZE			(SZ_4K)

#define SPRD_ADISLAVE_BASE		SPRD_ADISLAVE_PHYS
#define SPRD_ADISLAVE_PHYS		0X40038000
#define SPRD_ADISLAVE_SIZE		(SZ_4K)



#define SPRD_SYSTIMER_CMP_BASE		SPRD_SYSTIMER_CMP_PHYS
#define SPRD_SYSTIMER_CMP_PHYS		0X40040000
#define SPRD_SYSTIMER_CMP_SIZE		SZ_4K

#define SPRD_GPTIMER0_BASE		SPRD_GPTIMER0_PHYS
#define SPRD_GPTIMER0_PHYS		0X40050000
#define SPRD_GPTIMER0_SIZE		SZ_4K

#define SPRD_HWLOCK1_BASE		SPRD_HWLOCK1_PHYS
#define SPRD_HWLOCK1_PHYS		0X40060000
#define SPRD_HWLOCK1_SIZE		SZ_4K

#define SPRD_MDAR_BASE			SPRD_MDAR_PHYS
#define SPRD_MDAR_PHYS			0X40070000
#define SPRD_MDAR_SIZE			SZ_4K


#define SPRD_I2C_BASE			SPRD_I2C_PHYS
#define SPRD_I2C_PHYS			0X40080000
#define SPRD_I2C_SIZE			SZ_4K

#define SPRD_INT_BASE			SPRD_INT_PHYS
#define SPRD_INT_PHYS			0X40200000
#define SPRD_INT_SIZE			SZ_4K

#define SPRD_EIC_BASE			SPRD_EIC_PHYS
#define SPRD_EIC_PHYS			0X40210000
#define SPRD_EIC_SIZE			SZ_4K

#define SPRD_APTIMER0_BASE		SPRD_APTIMER0_PHYS
#define SPRD_APTIMER0_PHYS		0X40220000
#define SPRD_APTIMER0_SIZE		SZ_4K

#define SPRD_SYSCNT_BASE		SPRD_SYSCNT_PHYS
#define SPRD_SYSCNT_PHYS		0X40230000
#define SPRD_SYSCNT_SIZE		SZ_4K

#define SPRD_UIDEFUSE_BASE		SPRD_UIDEFUSE_PHYS
#define SPRD_UIDEFUSE_PHYS		0X40240000
#define SPRD_UIDEFUSE_SIZE		SZ_4K

#define SPRD_KPD_BASE			SPRD_KPD_PHYS
#define SPRD_KPD_PHYS			0X40250000
#define SPRD_KPD_SIZE			SZ_4K

#define SPRD_PWM_BASE			SPRD_PWM_PHYS
#define SPRD_PWM_PHYS			0X40260000
#define SPRD_PWM_SIZE			SZ_4K
#define CTL_BASE_PWM			SPRD_PWM_BASE

#define SPRD_FM_BASE			SPRD_FM_PHYS
#define SPRD_FM_PHYS			0X40270000
#define SPRD_FM_SIZE			SZ_4K

#define SPRD_GPIO_BASE			SPRD_GPIO_PHYS
#define SPRD_GPIO_PHYS			0X40280000
#define SPRD_GPIO_SIZE			SZ_4K

#define SPRD_WDG_BASE			SPRD_WDG_PHYS
#define SPRD_WDG_PHYS			0X40290000
#define SPRD_WDG_SIZE			SZ_4K

#define SPRD_PIN_BASE			SPRD_PIN_PHYS
#define SPRD_PIN_PHYS			0X402A0000
#define SPRD_PIN_SIZE			SZ_4K

#define SPRD_PMU_BASE			SPRD_PMU_PHYS
#define SPRD_PMU_PHYS			0X402B0000
#define SPRD_PMU_SIZE			SZ_64K

#define SPRD_IPI_BASE			SPRD_IPI_PHYS
#define SPRD_IPI_PHYS			0X402C0000
#define SPRD_IPI_SIZE			SZ_4K

#define SPRD_AONCKG_BASE		SPRD_AONCKG_PHYS
#define SPRD_AONCKG_PHYS		0X402D0000
#define SPRD_AONCKG_SIZE		SZ_4K

#define SPRD_AONAPB_BASE		SPRD_AONAPB_PHYS
#define SPRD_AONAPB_PHYS		0X402E0000
#define SPRD_AONAPB_SIZE		SZ_64K

#define SPRD_THM_BASE			SPRD_THM_PHYS
#define SPRD_THM_PHYS			0X402F0000
#define SPRD_THM_SIZE			SZ_4K

#define SPRD_AVSCA7_BASE		SPRD_AVSCA7_PHYS
#define SPRD_AVSCA7_PHYS		0X40300000
#define SPRD_AVSCA7_SIZE		SZ_4K

#define SPRD_CA7WDG_BASE		SPRD_CA7WDG_PHYS
#define SPRD_CA7WDG_PHYS		0X40310000
#define SPRD_CA7WDG_SIZE		SZ_4K


#define SPRD_APTIMER1_BASE		SPRD_APTIMER1_PHYS
#define SPRD_APTIMER1_PHYS		0X40320000
#define SPRD_APTIMER1_SIZE		SZ_4K

#define SPRD_APTIMER2_BASE		SPRD_APTIMER2_PHYS
#define SPRD_APTIMER2_PHYS		0X40330000
#define SPRD_APTIMER2_SIZE		SZ_4K
//

#define SPRD_CA7TS0_BASE		SPRD_CA7TS0_PHYS
#define SPRD_CA7TS0_PHYS		0X40400000
#define SPRD_CA7TS0_SIZE		SZ_4K

#define SPRD_CA7TS1_BASE		SPRD_CA7TS1_PHYS
#define SPRD_CA7TS1_PHYS		0X40410000
#define SPRD_CA7TS1_SIZE		SZ_4K

#define SPRD_MALI_BASE			SPRD_MALI_PHYS
#define SPRD_MALI_PHYS			0X60000000
#define SPRD_MALI_SIZE			SZ_4K

#define SPRD_GPUAPB_BASE		SPRD_GPUAPB_PHYS
#define SPRD_GPUAPB_PHYS		0X60100000
#define SPRD_GPUAPB_SIZE		SZ_4K

#define SPRD_GPUCKG_BASE		SPRD_GPUCKG_PHYS
#define SPRD_GPUCKG_PHYS		0X60200000
#define SPRD_GPUCKG_SIZE		SZ_4K

#define SPRD_DCAM_BASE			SPRD_DCAM_PHYS
#define SPRD_DCAM_PHYS			0X60800000
#define SPRD_DCAM_SIZE			SZ_64K

#define SPRD_VSP_BASE			SPRD_VSP_PHYS
#define SPRD_VSP_PHYS			0X60900000
#define SPRD_VSP_SIZE			(SZ_32K + SZ_16K)

#define SPRD_ISP_BASE			SPRD_ISP_PHYS
#define SPRD_ISP_PHYS			0X60A00000
#define SPRD_ISP_SIZE			SZ_32K

#define SPRD_JPG_BASE			SPRD_JPG_PHYS
#define SPRD_JPG_PHYS			0X60B00000
#define SPRD_JPG_SIZE			SZ_32K

#define SPRD_CSI2_BASE			SPRD_CSI2_PHYS
#define SPRD_CSI2_PHYS			0X60C00000
#define SPRD_CSI2_SIZE			SZ_4K

#define SPRD_MMAHB_BASE			SPRD_MMAHB_PHYS
#define SPRD_MMAHB_PHYS			0X60D00000
#define SPRD_MMAHB_SIZE			SZ_16K

#define SPRD_MMCKG_BASE			SPRD_MMCKG_PHYS
#define SPRD_MMCKG_PHYS			0X60E00000
#define SPRD_MMCKG_SIZE			SZ_4K

#define SPRD_UART0_BASE			SPRD_UART0_PHYS
#define SPRD_UART0_PHYS			0X70000000
#define SPRD_UART0_SIZE			SZ_4K

#define SPRD_UART1_BASE			SPRD_UART1_PHYS
#define SPRD_UART1_PHYS			0X70100000
#define SPRD_UART1_SIZE			SZ_4K

#define SPRD_UART2_BASE			SPRD_UART2_PHYS
#define SPRD_UART2_PHYS			0X70200000
#define SPRD_UART2_SIZE			SZ_4K

#define SPRD_UART3_BASE			SPRD_UART3_PHYS
#define SPRD_UART3_PHYS			0X70300000
#define SPRD_UART3_SIZE			SZ_4K

#define SPRD_UART4_BASE			SPRD_UART4_PHYS
#define SPRD_UART4_PHYS			0X70400000
#define SPRD_UART4_SIZE			SZ_4K

#define SPRD_I2C0_BASE			SPRD_I2C0_PHYS
#define SPRD_I2C0_PHYS			0X70500000
#define SPRD_I2C0_SIZE			SZ_4K

#define SPRD_I2C1_BASE			SPRD_I2C1_PHYS
#define SPRD_I2C1_PHYS			0X70600000
#define SPRD_I2C1_SIZE			SZ_4K

#define SPRD_I2C2_BASE			SPRD_I2C2_PHYS
#define SPRD_I2C2_PHYS			0X70700000
#define SPRD_I2C2_SIZE			SZ_4K

#define SPRD_I2C3_BASE			SPRD_I2C3_PHYS
#define SPRD_I2C3_PHYS			0X70800000
#define SPRD_I2C3_SIZE			SZ_4K

#define SPRD_I2C4_BASE			SPRD_I2C4_PHYS
#define SPRD_I2C4_PHYS			0X70900000
#define SPRD_I2C4_SIZE			SZ_4K

#define SPRD_SPI0_BASE			SPRD_SPI0_PHYS
#define SPRD_SPI0_PHYS			0X70A00000
#define SPRD_SPI0_SIZE			SZ_4K

#define SPRD_SPI1_BASE			SPRD_SPI1_PHYS
#define SPRD_SPI1_PHYS			0X70B00000
#define SPRD_SPI1_SIZE			SZ_4K

#define SPRD_SPI2_BASE			SPRD_SPI2_PHYS
#define SPRD_SPI2_PHYS			0X70C00000
#define SPRD_SPI2_SIZE			SZ_4K

#define SPRD_IIS0_BASE			SPRD_IIS0_PHYS
#define SPRD_IIS0_PHYS			0X70D00000
#define SPRD_IIS0_SIZE			SZ_4K

#define SPRD_IIS1_BASE			SPRD_IIS1_PHYS
#define SPRD_IIS1_PHYS			0X70E00000
#define SPRD_IIS1_SIZE			SZ_4K

#define SPRD_IIS2_BASE			SPRD_IIS2_PHYS
#define SPRD_IIS2_PHYS			0X70F00000
#define SPRD_IIS2_SIZE			SZ_4K

#define SPRD_IIS3_BASE			SPRD_IIS3_PHYS
#define SPRD_IIS3_PHYS			0X71000000
#define SPRD_IIS3_SIZE			SZ_4K

#define SPRD_SIM0_BASE			SPRD_SIM0_PHYS
#define SPRD_SIM0_PHYS			0X71100000
#define SPRD_SIM0_SIZE			SZ_4K


#define SPRD_APBREG_BASE		SPRD_APBREG_PHYS
#define SPRD_APBREG_PHYS		0X71300000
#define SPRD_APBREG_SIZE		SZ_64K

#define SPRD_INTC0_BASE			SPRD_INTC0_PHYS
#define SPRD_INTC0_PHYS			0X71400000
#define SPRD_INTC0_SIZE			SZ_4K

#define SPRD_INTC1_BASE			SPRD_INTC1_PHYS
#define SPRD_INTC1_PHYS			0X71500000
#define SPRD_INTC1_SIZE			SZ_4K

#define SPRD_INTC2_BASE			SPRD_INTC2_PHYS
#define SPRD_INTC2_PHYS			0X71600000
#define SPRD_INTC2_SIZE			SZ_4K

#define SPRD_INTC3_BASE			SPRD_INTC3_PHYS
#define SPRD_INTC3_PHYS			0X71700000
#define SPRD_INTC3_SIZE			SZ_4K

#define SPRD_IRAM0_BASE			SPRD_IRAM0_PHYS
#define SPRD_IRAM0_PHYS			0X0
#define SPRD_IRAM0_SIZE			SZ_4K

#define SPRD_IRAM0H_BASE		SPRD_IRAM0H_PHYS
#define SPRD_IRAM0H_PHYS		0X1000
#define SPRD_IRAM0H_SIZE		SZ_4K
#define SPRD_IRAM1_BASE			SPRD_IRAM1_PHYS
#define SPRD_IRAM1_PHYS			0X50000000
#define SPRD_IRAM1_SIZE			(SZ_32K + SZ_8K + SZ_4K + SZ_2K)

#define SPRD_MEMNAND_SYSTEM_BASE	SPRD_MEMNAND_SYSTEM_PHYS
#define SPRD_MEMNAND_SYSTEM_PHYS	0x8c800000
#define SPRD_MEMNAND_SYSTEM_SIZE	(0xaa00000)
#define SPRD_MEMNAND_USERDATA_BASE	SPRD_MEMNAND_USERDATA_PHYS
#define SPRD_MEMNAND_USERDATA_PHYS	0X97200000
#define SPRD_MEMNAND_USERDATA_SIZE	(0x6a00000)
#define SPRD_MEMNAND_CACHE_BASE		SPRD_MEMNAND_CACHE_PHYS
#define SPRD_MEMNAND_CACHE_PHYS		(0X97200000+0x6a00000)
#define SPRD_MEMNAND_CACHE_SIZE		(0x2400000)


/* registers for watchdog ,RTC, touch panel, aux adc, analog die... */
#define SPRD_MISC_BASE	((unsigned int)SPRD_ADI_BASE)
#define SPRD_MISC_PHYS			((unsigned int)SPRD_ADI_PHYS)

#define ANA_PWM_BASE			(SPRD_MISC_PHYS + 0x8020)
#define ANA_WDG_BASE			(SPRD_MISC_PHYS + 0x8040)
#define ANA_RTC_BASE			(SPRD_MISC_PHYS + 0x8080)
#define ANA_EIC_BASE			(SPRD_MISC_PHYS + 0x8100)
#define ANA_PIN_BASE			(SPRD_MISC_PHYS + 0x8180)
#define ANA_EFS_BASE		        (SPRD_MISC_PHYS + 0x8200 )
#define ANA_THM_BASE			(SPRD_MISC_PHYS + 0x8280)
#define ADC_BASE			(SPRD_MISC_PHYS + 0x8300)
#define ANA_CTL_INT_BASE		(SPRD_MISC_PHYS + 0x8380)
#define ANA_BTLC_INT_BASE		(SPRD_MISC_PHYS + 0x83C0)
#define ANA_AUDIFA_INT_BASE		(SPRD_MISC_PHYS + 0x8400)
#define ANA_GPIO_INT_BASE		(SPRD_MISC_PHYS + 0x8480)
#define ANA_FPU_INT_BASE		(SPRD_MISC_PHYS + 0x8500)
#define ANA_AUDCFGA_INT_BASE	        (SPRD_MISC_PHYS + 0x8600)
#define ANA_HDT_INT_BASE		(SPRD_MISC_PHYS + 0x8700)

#define ANA_CTL_GLB_BASE		( SPRD_MISC_PHYS + 0x8800 )

#define SPRD_ANA_EIC_PHYS		ANA_EIC_BASE
#define SPRD_ANA_GPIO_PHYS		ANA_GPIO_INT_BASE
#define SPRD_ANA_FPU_PHYS		ANA_FPU_INT_BASE

#ifndef REGS_AHB_BASE
#define REGS_AHB_BASE			( SPRD_AHB_PHYS+ 0x200)
#endif

/* FIXME: jianjun.he */
#define SPRD_IRAM_PHYS		SPRD_IRAM0_PHYS + 0x1000
#define SPRD_IRAM_SIZE		SZ_4K
#define SPRD_GREG_PHYS		SPRD_AONAPB_PHYS
#define SPRD_GREG_SIZE		SZ_64K


#ifndef REGS_GLB_BASE
#define REGS_GLB_BASE			( SPRD_GREG_BASE )
#define ANA_REGS_GLB_BASE	( ANA_CTL_GLB_BASE )
#define ANA_REGS_GLB_PHYS		( SPRD_MISC_PHYS + 0x8800 )
#endif

#define CHIP_ID_LOW_REG		(SPRD_AHB_PHYS+ 0xfc)

#define SPRD_GPTIMER_BASE	SPRD_GPTIMER0_PHYS
//#define REG_GLB_GEN0 		SPRD_AONAPB_BASE
#define SPRD_EFUSE_BASE		SPRD_UIDEFUSE_PHYS

#define REGS_AP_AHB_BASE	SPRD_AHB_PHYS
#define REGS_AP_APB_BASE	SPRD_APBREG_PHYS
#define REGS_AON_APB_BASE	SPRD_AONAPB_PHYS
#define REGS_GPU_APB_BASE	SPRD_GPUAPB_PHYS
#define REGS_MM_AHB_BASE	SPRD_MMAHB_PHYS
#define REGS_PMU_APB_BASE	SPRD_PMU_PHYS
#define REGS_AON_CLK_BASE	SPRD_AONCKG_PHYS
#define REGS_AP_CLK_BASE	SPRD_APBCKG_PHYS
#define REGS_GPU_CLK_BASE	SPRD_GPUCKG_PHYS
#define REGS_MM_CLK_BASE	SPRD_MMCKG_PHYS
#define REGS_PUB_APB_BASE	SPRD_PUB_PHYS

#define SIPC_SMEM_ADDR 		(CONFIG_PHYS_OFFSET + 120 * SZ_1M)

#define CPT_START_ADDR		(CONFIG_PHYS_OFFSET + 128 * SZ_1M)
#define CPT_TOTAL_SIZE		(SZ_1M * 18)
#define CPT_RING_ADDR		(CPT_START_ADDR + CPT_TOTAL_SIZE - SZ_4K)
#define CPT_RING_SIZE		(SZ_4K)
#define CPT_SMEM_SIZE		(SZ_1M * 2)
#define CPW_START_ADDR		(CONFIG_PHYS_OFFSET + 256 * SZ_1M)
#define CPW_TOTAL_SIZE		(SZ_1M * 33)
#define CPW_RING_ADDR		(CPW_START_ADDR + CPW_TOTAL_SIZE - SZ_4K)
#define CPW_RING_SIZE			(SZ_4K)
#define CPW_SMEM_SIZE		(SZ_1M * 2)
#define WCN_START_ADDR		(CONFIG_PHYS_OFFSET + 320 * SZ_1M)
#define WCN_TOTAL_SIZE		(SZ_1M * 5)
#define WCN_RING_ADDR		(WCN_START_ADDR + WCN_TOTAL_SIZE - SZ_4K)
#define WCN_RING_SIZE			(SZ_4K)
#define WCN_SMEM_SIZE		(SZ_1M * 2)
#endif
