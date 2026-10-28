# SPDX-License-Identifier: GPL-2.0
# Out-of-tree build for the nRF24L01 driver.

obj-m := nrf24.o

# Default to the headers of the running kernel; override with
#`make KDIR=/path/to/linux` when building against another tree
KDIR ?= /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) M=$(CURDIR) modules

clean:
	$(MAKE) -C $(KDIR) M=$(CURDIR) clean

.PHONY: all clean
