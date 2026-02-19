#ifdef IO_DRIVERS
#include <sys/io.h>
#include <sys/ioctl.h>
#endif
#include "svgalib_helper.h"
#include "libvga.h"

void __svgalib_port_rep_outb(unsigned char* string, int length, int port)
{
#ifdef IO_DRIVERS
  outsb(port, string, length);
#endif
}

void __svgalib_port_out(int value, int port)
{
#ifdef IO_DRIVERS
  outb(value, port);
#endif
}

void __svgalib_port_outw(int value, int port)
{
#ifdef IO_DRIVERS
  outw(value, port);
#endif
}

void __svgalib_port_outl(int value, int port)
{
#ifdef IO_DRIVERS
  outl(value, port);
#endif
}

int __svgalib_port_in(int port)
{
#ifdef IO_DRIVERS
  return inb(port);
#endif
}

int __svgalib_port_inw(int port)
{
#ifdef IO_DRIVERS
  return inw(port);
#endif
}

int __svgalib_port_inl(int port)
{
#ifdef IO_DRIVERS
  return inl(port);
#endif
}
