#pragma once
#include "math.h"
#include "Framebuffer.h"
#include "SimpleFonts.h"


class BasicRenderer{
    public:
        BasicRenderer(Framebuffer* targetFrameBuffer, PSF1_FONT* psf1_Font);
        Point CursorPosition;
        Framebuffer* TargetFrameBuffer;
        PSF1_FONT* PSF1_Font;
        unsigned int Colour;
        void Print(const char* str);  
        void putChar(char chr, unsigned int xOff, unsigned int yOff);
};