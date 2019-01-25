/* drivers/video/sprdfb/lcd_hx8394a_mipi.c
 *
 * Support for hx8394a mipi LCD device
 *
 * Copyright (C) 2015 Spreadtrum
 */

#include "../sprdfb_chip_common.h"
#include "../sprdfb.h"
#include "../sprdfb_panel.h"

#define printk printf

#define  LCD_DEBUG
#ifdef LCD_DEBUG
#define LCD_PRINT printk
#else
#define LCD_PRINT(...)
#endif

#define MAX_DATA   150

typedef struct LCM_Init_Code_tag {
	unsigned int tag;
	unsigned char data[MAX_DATA];
}LCM_Init_Code;

typedef struct LCM_force_cmd_code_tag{
	unsigned int datatype;
	LCM_Init_Code real_cmd_code;
}LCM_Force_Cmd_Code;

#define LCM_TAG_SHIFT 24
#define LCM_TAG_MASK  ((1 << 24) -1)
#define LCM_SEND(len) ((1 << LCM_TAG_SHIFT)| len)
#define LCM_SLEEP(ms) ((2 << LCM_TAG_SHIFT)| ms)

#define LCM_TAG_SEND  (1<< 0)
#define LCM_TAG_SLEEP (1 << 1)

static LCM_Init_Code init_data[] = {
{LCM_SEND(6),  {4,  0, 0xB9,0xFF,0x83,0x94}},
{LCM_SEND(19), {17, 0, 0xBA,0x63,0x82,0x00,0x16,0xC5,0x00,0x10,0xFF,0x0F,0x24,0x03,0x21,0x24,0x25,0x20,0x08}},
{LCM_SEND(20), {18, 0, 0xB1,0x01,0x00,0x04,0xC4,0x03,0x12,0xF1,0x24,0x2C,0x3F,0x3F,0x57,0x02,0x00,0xE6,0xE2,0xA6}},
{LCM_SEND(9),  {7,  0, 0xB2,0x00,0xC8,0x0E,0x30,0x00,0x33}},
{LCM_SEND(34), {32, 0, 0xB4,0x80,0x04,0x32,0x10,0x08,0x54,0x15,0x0F,0x22,0x10,0x08,0x47,0x53,0x54,0x0A,0x4B,0x53,0x54,0x02,0x61,0x61,0x02,0x06,0x44,0x06,0x5F,0x0A,0x6B,0x70,0x05,0x08}},
{LCM_SEND(2),  {0xB6, 0x21}},
{LCM_SEND(57), {55, 0, 0xD5,0x00,0x00,0x00,0x00,0x0A,0x00,0x01,0x22,0x00,0x33,0xCC,0x00,0xAA,0xBB,0x01,0x23,0x45,0x67,0x9A,0xBC,0x45,0x67,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x01,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x3C,0x01}},

{LCM_SEND(2),  {0xCC, 0x09}},

{LCM_SEND(7),  {5,  0, 0xBF,0x06,0x02,0x10,0x04}},

{LCM_SEND(7),  {5,  0, 0xC7,0x00,0x10,0x00,0x10}},

{LCM_SEND(28), {26, 0, 0xE0,0x00,0x04,0x08,0x28,0x2F,0x3F,0x15,0x34,0x06,0x0C,0x0E,0x12,0x14,0x13,0x14,0x11,0x19,0x00,0x04,0x08,0x29,0x2E,0x3F,0x15,0x35}},
{LCM_SEND(19), {17, 0, 0x07,0x0C,0x0F,0x11,0x13,0x11,0x12,0x10,0x16,0x0A,0x17,0x07,0x12,0x0A,0x17,0x06,0x11}},

{LCM_SEND(5),  {3,  0, 0xC0,0x0C,0x17}},

{LCM_SEND(5),  {3,  0, 0xC6,0x08,0x08}},

{LCM_SEND(2),  {0xD4, 0x32}},
{LCM_SEND(1),  {0x11}},
{LCM_SLEEP(120)},

{LCM_SEND(20), {18, 0, 0xBA,0x63,0x82,0x00,0x16,0xC5,0x00,0x10,0xFF,0x0F,0x24,0x03,0x21,0x24,0x25,0x20,0x08,0x3D}},
{LCM_SLEEP(10)},

{LCM_SEND(1),  {0x29}},
{LCM_SLEEP(50)},
};

static LCM_Init_Code read_id_password[] = {
{LCM_SEND(6),  {4,  0, 0xB9,0xFF,0x83,0x94}},
};

static int32_t hx8394a_mipi_init(struct panel_spec *self)
{
	int32_t i;
	LCM_Init_Code *init = init_data;
	unsigned int tag;

	mipi_set_cmd_mode_t mipi_set_cmd_mode = self->info.mipi->ops->mipi_set_cmd_mode;
	mipi_dcs_write_t mipi_dcs_write = self->info.mipi->ops->mipi_dcs_write;
	mipi_eotp_set_t mipi_eotp_set = self->info.mipi->ops->mipi_eotp_set;

	LCD_PRINT("lcd_hx8394a_init\n");

	mipi_set_cmd_mode();
	mipi_eotp_set(0,0);

	for(i = 0; i < ARRAY_SIZE(init_data); i++){
		tag = (init->tag >>24);
		if(tag & LCM_TAG_SEND){
			mipi_dcs_write(init->data, (init->tag & LCM_TAG_MASK));
			udelay(20);
		}else if(tag & LCM_TAG_SLEEP){
			mdelay(init->tag & LCM_TAG_MASK);//udelay((init->tag & LCM_TAG_MASK) * 1000);
		}
		init++;
	}
	mipi_eotp_set(0,0);

	return 0;
}


static uint32_t hx8394a_readid(struct panel_spec *self)
{
	uint32_t j =0;
	uint8_t read_data[4] = {0};
	int32_t read_rtn = 0;
	uint8_t param[2] = {0};
	mipi_set_cmd_mode_t mipi_set_cmd_mode = self->info.mipi->ops->mipi_set_cmd_mode;
	mipi_force_write_t mipi_force_write = self->info.mipi->ops->mipi_force_write;
	mipi_force_read_t mipi_force_read = self->info.mipi->ops->mipi_force_read;
	mipi_eotp_set_t mipi_eotp_set = self->info.mipi->ops->mipi_eotp_set;

	LCD_PRINT("lcd_hx8394a_mipi read id!\n");

	mipi_set_cmd_mode();
	mipi_eotp_set(0,0);

	for(j = 0; j < 4; j++){
		param[0] = 0x03;
		param[1] = 0x00;
		mipi_force_write(0x37, param, 2);
		read_rtn = mipi_force_read(0x04,3, &read_data[0]);
		LCD_PRINT("lcd_hx8394a_mipi read id 0x04 value is 0x%x, 0x%x, 0x%x!\n", read_data[0], read_data[1], read_data[2]);

		if(0x83 == read_data[0] && 0x94 == read_data[1] && 0x1A == read_data[2]){
				LCD_PRINT("hx8394a success!\n");
				return 0x8394;
			}
	}
	mipi_eotp_set(0,0);

	return 0x0;
}

static struct panel_operations lcd_hx8394a_mipi_operations = {
	.panel_init = hx8394a_mipi_init,
	.panel_readid = hx8394a_readid,
};

static struct timing_rgb lcd_hx8394a_mipi_timing = {
	.hfp = 80,  /* unit: pixel */
	.hbp = 60,
	.hsync = 60,
	.vfp = 38, /*unit: line*/
	.vbp = 12,
	.vsync = 4,
};


static struct info_mipi lcd_hx8394a_mipi_info = {
	.work_mode  = SPRDFB_MIPI_MODE_VIDEO,
	.video_bus_width = 24, /*18,16*/
	.lan_number = 	4,
	.phy_feq =500*1000,
	.h_sync_pol = SPRDFB_POLARITY_POS,
	.v_sync_pol = SPRDFB_POLARITY_POS,
	.de_pol = SPRDFB_POLARITY_POS,
	.te_pol = SPRDFB_POLARITY_POS,
	.color_mode_pol = SPRDFB_POLARITY_NEG,
	.shut_down_pol = SPRDFB_POLARITY_NEG,
	.timing = &lcd_hx8394a_mipi_timing,
	.ops = NULL,
};

struct panel_spec lcd_hx8394a_mipi_spec = {
	.width = 720,
	.height = 1280,
	.fps = 61,
	.type = LCD_MODE_DSI,
	.direction = LCD_DIRECT_NORMAL,
	.info = {
		.mipi = &lcd_hx8394a_mipi_info
	},
	.ops = &lcd_hx8394a_mipi_operations,
};
