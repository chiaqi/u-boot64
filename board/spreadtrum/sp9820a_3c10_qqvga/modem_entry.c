#include <common.h>
#include <asm/arch/sprd_reg.h>
#include "cp_boot.h"
#include "loader_common.h"


void cp_adr_remap(u32 cp_kernel_exec_addr, u32 cp_zero_map_addr)
{
    u32 data[3] = {0xe59f0000, 0xe12fff10,   cp_kernel_exec_addr};
    memcpy( cp_zero_map_addr, data, sizeof(data));      /* copy cp0 source code */
}

void modem_entry()
{
	sipc_addr_reset();

#if !defined( CONFIG_KERNEL_BOOT_CP )
	pmic_arm7_boot();

	/*if recovery mode and not cali mode, skip boot modem image*/
	if (strstr(getenv("bootmode"), "recovery")
			&& NULL == get_calibration_parameter()) {
		/* in pikel, if doesn't release cp1, the kernel will hung */
		debugf("recovery mode, have not load cp image set cp while in zero addr!");
		*(u32*)CP1_ZERO_MAP_ADR = 0xeafffffe;
	} else {
		cp_adr_remap(CP1_EXEC_ADR, CP1_ZERO_MAP_ADR);
	}

	cp1_boot();
#endif
}


void sipc_addr_reset()
{

	/*to be fill in*/
	//memset((void *)SIPC_GGE_APCP_START_ADDR, 0x0, SIPC_APCP_RESET_ADDR_SIZE);
	memset((void *)SIPC_LTE_APCP_START_ADDR, 0x0, SIPC_APCP_RESET_ADDR_SIZE);
	memset((void *)SIPC_PMIC_SIPC_START_ADDR, 0x0, 0x2000);
	return;

}



