// SPDX-License-Identifier: GPL-2.0
/*
 * Driver for the Nordic Semiconductor nRF24L01+ 2.4 GHz transceiver.
 */

#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/init.h>
#include <linux/module.h>

static int __init nrf24_init(void)
{
	pr_info("module loaded\n");
	return 0;
}

static void __exit nrf24_exit(void)
{
	pr_info("module unloaded\n");
}

module_init(nrf24_init);
module_exit(nrf24_exit);

MODULE_AUTHOR("Yağız Kesepara <yayahaga4@gmail.com>");
MODULE_DESCRIPTION("Nordic nRF24L01+ 2.4 GHz transceiver driver");
MODULE_LICENSE("GPL");

