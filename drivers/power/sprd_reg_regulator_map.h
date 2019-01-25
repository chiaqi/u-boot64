/*
 * Copyright (C) 2014-2015 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 */

/*
 * Regulator (0)Name, Regulator (1)Type, Power Off (2)Ctrl and (3)Bit, Power On (4)Ctrl and (5)Bit, Sleep (6)Ctrl and (7)Bit,
 * Voltage Trimming (8)Ctrl and (9)Bits, Calibration (10)Ctrl and (11)Bits,
 * Voltage (12)Default, Voltage (13)Ctrl and (14)Bits, Voltage Select (15)Count and Voltage (16)List[ ... ...]
 */

    SCI_REGU_REG(vddcore, 2, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(9), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(9), 0, 0,
	ANA_REG_GLB_DCDC_CORE_ADI, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(16)|BIT(18)|BIT(19),
	1100, ANA_REG_GLB_DCDC_CORE_ADI, BIT(5)|BIT(6)|BIT(7), 8, 1100, 700, 800, 900, 1000, 650, 1200, 1300);

    SCI_REGU_REG(vddarm, 2, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(10), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(10), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(9),
	ANA_REG_GLB_DCDC_ARM_ADI, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(17)|BIT(18)|BIT(19),
	1000, ANA_REG_GLB_DCDC_ARM_ADI, BIT(5)|BIT(6)|BIT(7), 8, 1100, 700, 800, 900, 1000, 650, 1200, 1300);

    SCI_REGU_REG(vddmem, 2, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(11), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(11), 0, 0,
	ANA_REG_GLB_DCDC_MEM_ADI, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(16)|BIT(17)|BIT(18)|BIT(19),
	1250, ANA_REG_GLB_DCDC_MEM_ADI, BIT(5), 2, 1200, 1250);

    SCI_REGU_REG(vddldo, 2, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(12), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(12), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(12),
	ANA_REG_GLB_DCDC_GEN_ADI, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(20),
	2400, ANA_REG_GLB_DCDC_GEN_ADI, BIT(5)|BIT(6)|BIT(7), 8, 2200, 1800, 1900, 2000, 2100, 2300, 2400, 2500);

    SCI_REGU_REG(vddwpa, 2, ANA_REG_GLB_LDO_PD_CTRL, BIT(11), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL0, BIT(11),
	ANA_REG_GLB_DCDC_WPA_ADI, BIT(0)|BIT(1)|BIT(2), ANA_REG_GLB_LDO_CAL_SEL, BIT(16)|BIT(20),
	0, 0, 0, 0);

    SCI_REGU_REG(vddwrf, 2, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(13), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(13), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(10),
	ANA_REG_GLB_DCDC_WRF_ADI, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(17)|BIT(20),
	0, ANA_REG_GLB_DCDC_WRF_ADI, BIT(5)|BIT(6), 4, 2600, 2700, 2800, 2900);

    SCI_REGU_REG(vdd18, 0, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(1), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(1), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(0),
	ANA_REG_GLB_LDO_CAL_CTRL0, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(6)|BIT(7)|BIT(17)|BIT(18)|BIT(20),
	1800, ANA_REG_GLB_LDO_V_CTRL0, BIT(0)|BIT(1), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vdd28, 0, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(2), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(2), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(1),
	ANA_REG_GLB_LDO_CAL_CTRL0, BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9), ANA_REG_GLB_LDO_CAL_SEL, BIT(8)|BIT(10)|BIT(16)|BIT(18)|BIT(20),
	2800, ANA_REG_GLB_LDO_V_CTRL0, BIT(2)|BIT(3), 4, 2800, 3000, 2650, 1800);

    SCI_REGU_REG(vdd25, 0, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(3), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(3), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(2),
	ANA_REG_GLB_LDO_CAL_CTRL0, BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14), ANA_REG_GLB_LDO_CAL_SEL, BIT(9)|BIT(10)|BIT(16)|BIT(18)|BIT(20),
	2500, ANA_REG_GLB_LDO_V_CTRL0, BIT(4)|BIT(5), 4, 2500, 2750, 3000, 2900);

    SCI_REGU_REG(vddrf0, 0, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(4), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(4), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(3),
	ANA_REG_GLB_LDO_CAL_CTRL1, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(11)|BIT(13)|BIT(16)|BIT(17)|BIT(18)|BIT(20),
	2850, ANA_REG_GLB_LDO_V_CTRL0, BIT(6)|BIT(7), 4, 2850, 2950, 2500, 1800);

    SCI_REGU_REG(vddrf1, 0, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(5), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(5), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(4),
	ANA_REG_GLB_LDO_CAL_CTRL1, BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9), ANA_REG_GLB_LDO_CAL_SEL, BIT(13)|BIT(16)|BIT(17)|BIT(18)|BIT(20),
	2850, ANA_REG_GLB_LDO_V_CTRL0, BIT(8)|BIT(9), 4, 2850, 2950, 2500, 1800);

    SCI_REGU_REG(vddrf2, 0, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(6), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(6), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(5),
	ANA_REG_GLB_LDO_CAL_CTRL1, BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14), ANA_REG_GLB_LDO_CAL_SEL, BIT(11)|BIT(12)|BIT(16)|BIT(17)|BIT(18)|BIT(20),
	2850, ANA_REG_GLB_LDO_V_CTRL0, BIT(10)|BIT(11), 4, 2850, 2950, 2500, 1800);

    SCI_REGU_REG(vddemmcio, 0, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(7), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(7), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(6),
	ANA_REG_GLB_LDO_CAL_CTRL2, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(7)|BIT(17)|BIT(18)|BIT(20),
	1800, ANA_REG_GLB_LDO_V_CTRL0, BIT(12)|BIT(13), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vddemmccore, 0, ANA_REG_GLB_LDO_DCDC_PD_RTCSET, BIT(8), ANA_REG_GLB_LDO_DCDC_PD_RTCCLR, BIT(8), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(7),
	ANA_REG_GLB_LDO_CAL_CTRL2, BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9), ANA_REG_GLB_LDO_CAL_SEL, BIT(10)|BIT(16)|BIT(18)|BIT(20),
	3000, ANA_REG_GLB_LDO_V_CTRL0, BIT(14)|BIT(15), 4, 2800, 3000, 2500, 1800);

    SCI_REGU_REG(avdd18, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(0), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(0),
	ANA_REG_GLB_LDO_CAL_CTRL3, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(5)|BIT(7)|BIT(17)|BIT(18)|BIT(20),
	1800, ANA_REG_GLB_LDO_V_CTRL1, BIT(0)|BIT(1), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vddsd, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(1), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(1),
	ANA_REG_GLB_LDO_CAL_CTRL3, BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9), ANA_REG_GLB_LDO_CAL_SEL, BIT(11)|BIT(16)|BIT(17)|BIT(18)|BIT(20),
	2800, ANA_REG_GLB_LDO_V_CTRL1, BIT(2)|BIT(3), 4, 2800, 3000, 2500, 1800);

    SCI_REGU_REG(vddsim0, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(2), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(2),
	ANA_REG_GLB_LDO_CAL_CTRL4, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(9)|BIT(16)|BIT(18)|BIT(20),
	1800, ANA_REG_GLB_LDO_V_CTRL1, BIT(4)|BIT(5), 4, 1800, 2900, 3000, 3100);

    SCI_REGU_REG(vddsim1, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(3), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(3),
	ANA_REG_GLB_LDO_CAL_CTRL4, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(9)|BIT(16)|BIT(18)|BIT(20),
	1800, ANA_REG_GLB_LDO_V_CTRL1, BIT(6)|BIT(7), 4, 1800, 2900, 3000, 3100);

    SCI_REGU_REG(vddsim2, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(4), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(4),
	ANA_REG_GLB_LDO_CAL_CTRL4, BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9), ANA_REG_GLB_LDO_CAL_SEL, BIT(8)|BIT(9)|BIT(16)|BIT(18)|BIT(20),
	1800, ANA_REG_GLB_LDO_V_CTRL1, BIT(8)|BIT(9), 4, 2800, 3000, 2500, 1800);

    SCI_REGU_REG(vddcama, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(5), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(5),
	ANA_REG_GLB_LDO_CAL_CTRL4, BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14), ANA_REG_GLB_LDO_CAL_SEL, BIT(12)|BIT(16)|BIT(17)|BIT(18)|BIT(20),
	2800, ANA_REG_GLB_LDO_V_CTRL2, BIT(0)|BIT(1), 4, 2800, 3000, 2500, 1800);

    SCI_REGU_REG(vddcamd, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(6), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(6),
	ANA_REG_GLB_LDO_CAL_CTRL5, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(5)|BIT(6)|BIT(17)|BIT(18)|BIT(20),
	1500, ANA_REG_GLB_LDO_V_CTRL2, BIT(2)|BIT(3), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vddcamio, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(7), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(7),
	ANA_REG_GLB_LDO_CAL_CTRL5, BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9), ANA_REG_GLB_LDO_CAL_SEL, BIT(5)|BIT(17)|BIT(18)|BIT(20),
	1800, ANA_REG_GLB_LDO_V_CTRL2, BIT(4)|BIT(5), 4, 1500, 1800, 2500, 2800);

    SCI_REGU_REG(vddcammot, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(8), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(8),
	ANA_REG_GLB_LDO_CAL_CTRL5, BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14), ANA_REG_GLB_LDO_CAL_SEL, BIT(12)|BIT(13)|BIT(16)|BIT(17)|BIT(18)|BIT(20),
	2800, ANA_REG_GLB_LDO_V_CTRL2, BIT(6)|BIT(7), 4, 3000, 3300, 2800, 1800);

    SCI_REGU_REG(vddusb, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(9), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(9),
	ANA_REG_GLB_LDO_CAL_CTRL2, BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14), ANA_REG_GLB_LDO_CAL_SEL, BIT(8)|BIT(9)|BIT(10)|BIT(16)|BIT(18)|BIT(20),
	3300, ANA_REG_GLB_LDO_V_CTRL2, BIT(8)|BIT(9), 4, 3300, 3400, 3200, 3100);

    SCI_REGU_REG(vddclsg, 0, ANA_REG_GLB_LDO_PD_CTRL, BIT(10), 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(10),
	ANA_REG_GLB_LDO_CAL_CTRL6, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_CAL_SEL, BIT(6)|BIT(17)|BIT(18)|BIT(20),
	0, ANA_REG_GLB_LDO_V_CTRL2, BIT(10)|BIT(11), 4, 1500, 1800, 1300, 1200);

