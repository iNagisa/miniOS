#pragma once

#include <arch/x64/io.h>

#define SERIAL_PORT 0x3f8

int init_serial();

char read_serial();

void write_serial(char ch);

void NA_serial_printk(char *buf, int len);
