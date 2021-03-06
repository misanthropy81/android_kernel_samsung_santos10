#include <linux/i2c.h>
#include <linux/mfd/core.h>
#include <linux/mfd/intel_mid_pmic.h>
#include <asm/intel_vlv2.h>

enum {
	PWRSRC_IRQ = 0,
	THRM_IRQ,
	BCU_IRQ,
	ADC_IRQ,
	CHGR_IRQ,
	GPIO_IRQ,
	VHDMIOCP_IRQ
};

static struct resource pwrsrc_resources[] = {
	{
		.name  = "PWRSRC",
		.start = PWRSRC_IRQ,
		.end   = PWRSRC_IRQ,
		.flags = IORESOURCE_IRQ,
	},
};

static struct resource adc_resources[] = {
	{
		.name  = "ADC",
		.start = ADC_IRQ,
		.end   = ADC_IRQ,
		.flags = IORESOURCE_IRQ,
	},
};

static struct mfd_cell crystal_cove_data[] = {
	{
		.name = "crystal_cove_pwrsrc",
		.id = 0,
		.num_resources = ARRAY_SIZE(pwrsrc_resources),
		.resources = pwrsrc_resources,
	},
	{
		.name = "crystal_cove_adc",
		.id = 0,
		.num_resources = ARRAY_SIZE(adc_resources),
		.resources = adc_resources,
	},
	{NULL, },
};

static struct i2c_board_info __initdata crystal_cove_device = {
	I2C_BOARD_INFO("crystal_cove", 0x6e),
	.irq = VV_GPIO_IRQBASE + VV_NGPIO_SCORE + VV_NGPIO_NCORE + 0, /* sus0 */
	.platform_data = &crystal_cove_data,
};

static int __init crystal_cove_init(void)
{
	return i2c_register_board_info(7, &crystal_cove_device, 1);
}
module_init(crystal_cove_init);

