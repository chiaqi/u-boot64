#include <common.h>
#include <asm/arch/hardware.h>
#include <asm/io.h>
#include <asm/arch/sprd_reg.h>

#define PWM_INDEX 2

#define PWM_PRESCALE (0x0000)
#define PWM_CNT (0x0004)
#define PWM_PAT_LOW (0x000C)
#define PWM_PAT_HIG (0x0010)

#define PWM_ENABLE (1 << 8)
#define PWM2_SCALE 0x0
#define PWM_REG_MSK 0xffff
#define PWM_MOD_MAX 0xff


static inline uint32_t pwm_read(int index, uint32_t reg)
{
	return __raw_readl(CTL_BASE_PWM + index * 0x20 + reg);
}

static void pwm_write(int index, uint32_t value, uint32_t reg)
{
	__raw_writel(value, CTL_BASE_PWM + index * 0x20 + reg);
}

static void configure_backlight()
{

	char temp=0;
#ifdef CONFIG_SS_SHARKLT8
	sprd_gpio_request(NULL, LCD_LDO_EN);
	sprd_gpio_direction_output(NULL, LCD_LDO_EN, 1);//LCD_LDO_EN
	sprd_gpio_set(NULL, LCD_LDO_EN, 1);
	sprd_gpio_request(NULL, LCD_BL_EN); //LCD_BL_EN
	sprd_gpio_direction_output(NULL, LCD_BL_EN, 1);
	sprd_gpio_set(NULL, LCD_BL_EN, 1);
	sprd_gpio_request(NULL, 53);
	sprd_gpio_direction_output(NULL, 53, 0);
	sprd_gpio_set(NULL, 53, 1);
	mdelay(5);
	sprd_gpio_request(NULL, 52);
	sprd_gpio_direction_output(NULL, 52, 0);
	sprd_gpio_set(NULL, 52, 1);
	i2c_set_bus_num(0);
	temp=i2c_reg_read(0x11,0x02);
	printf("zyun:  get 0x02=0x%x\n",temp);
	temp&=0x1F;
	temp|=0x40; //set bit 5, 6, 7 to 010
	i2c_reg_write(0x11, 0x02, temp);

	temp=i2c_reg_read(0x11,0x03);
	printf("zyun: get 0x03=0x%x\n",temp);
	//			temp&=0x1F;
	temp|=0x80; //set bit 7 to 1
	i2c_reg_write(0x11, 0x03, temp);

	temp=i2c_reg_read(0x11,0x09);
	printf("zyun: get 0x09=0x%x\n",temp);
	temp&=0xBF;
	//			temp|=0x80; //set bit 6 to 0
	i2c_reg_write(0x11, 0x09, temp);

	temp=i2c_reg_read(0x11,0x0C);
	printf("zyun: get 0x0C=0x%x\n",temp);
	//			temp&=0x1F;
	temp|=0x01; //set bit 0 to 1
	i2c_reg_write(0x11, 0x0C, temp);
	//set string and enable it

	temp=i2c_reg_read(0x11,0x0A);
	printf("zyun: get 0x0A=0x%x\n",temp);
	//temp&=0xEF; //set bit 4 to 0
	//temp|=0x08; //set bit 3 to 1
	//temp|=0x01; //set bit 0 to 1
	temp=0x09;
	i2c_reg_write(0x11, 0x0A, temp);
#endif
	return;
}

void set_backlight(uint32_t brightness)
{
	int index = PWM_INDEX;

	__raw_bits_or((0x1 << 0), REG_AON_CLK_CORE_clk_pwm0_cfg + index * 4);//ext_26m select

	if (0 == brightness) {
		pwm_write(index, 0, PWM_PRESCALE);
		configure_backlight();
		printf("sprd backlight power off. pwm_index=%d  brightness=%d\n", index, brightness);
	} else {
		__raw_bits_or((0x1 << (index+4)), REG_AON_APB_APB_EB0); //PWMx EN

		pwm_write(index, PWM2_SCALE, PWM_PRESCALE);
		pwm_write(index, (brightness << 8) | PWM_MOD_MAX, PWM_CNT);
		pwm_write(index, PWM_REG_MSK, PWM_PAT_LOW);
		pwm_write(index, PWM_REG_MSK, PWM_PAT_HIG);
		pwm_write(index, PWM_ENABLE, PWM_PRESCALE);
		printf("sprd backlight power on. pwm_index=%d  brightness=%d\n", index, brightness);
	}
	return;
}
