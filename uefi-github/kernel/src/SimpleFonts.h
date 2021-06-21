#pragma once

//text
struct PSF1_HEADER{
	unsigned char magic[2]; //psf file id
	unsigned char mode;		//psf mode of file
	unsigned char charsize;	//how large chars are in bytes
};

struct PSF1_FONT{
	PSF1_HEADER* psf1_Header;
	void* glyphBuffer;
};