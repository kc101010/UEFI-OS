#pragma once
#include <stdint.h>

void outb(uint16_t port, uint8_t value); //place value onto bus
uint8_t inb(uint16_t port); //read value from bus
void io_wait();