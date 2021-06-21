#pragma once

#include <stddef.h>

//graphics from boot
struct Framebuffer{
	void* BaseAddress; //base address of FB
	size_t BufferSize;
	unsigned int Width;
	unsigned int Height;
	unsigned int PixelsPerScanLine; 
};