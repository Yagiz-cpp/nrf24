# nrf24

Linux kernel driver for the Nordic Semiconductor nRF24L01+ 2.4 GHz
transceiver, developed on a BeagleBone Black with the goal of
upstream submission.

> **Status:** early development. Currently only a module skeleton;
> SPI, GPIO and IRQ support are not implemented yet.

## Hardware

- BeagleBone Black (AM335x), Debian Bookworm, kernel 6.12-bone
- nRF24L01+ modules on SPI0 (wiring will be documented once finalized)

## Building

On the BeagleBone Black (native build against the running kernel):

```sh
make
sudo insmod nrf24.ko
```

On a PC against a local kernel tree (e.g. for testing in virtme-ng):

```sh
make KDIR=$HOME/linux
vng --run $HOME/linux --user root
```

## License

GPL-2.0, see the SPDX headers in each source file.
