#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int make_rgb(unsigned char r, unsigned char g, unsigned char b);
unsigned char get_red(int color);
unsigned char get_green(int color);
unsigned char get_blue(int color);

int main() {

	unsigned int color;
	unsigned char color_r = 0, color_g = 0, color_b = 0;

	printf("RGB 색상? ");
	scanf("%x", &color);

	get_red(color);
	get_green(color);
	get_blue(color);

	make_rgb(get_red(color), get_green(color), get_blue(color));

	printf("RGB %06X의 보색: %06X", color, make_rgb(get_red(color), get_green(color), get_blue(color)));

	return 0;
}

int make_rgb(unsigned char r, unsigned char g, unsigned char b) {

	unsigned char red, green, blue;

	red = ~r;
	green = ~g;
	blue = ~b;
	
	unsigned int color = 0;

	color = blue;
	color = color << 8 | green;
	color = color << 8 | red;

	return color;
}

unsigned char get_red(int color) {

	unsigned char red = color & 0b11111111;

	return red;
}

unsigned char get_green(int color) {

	unsigned char green = color >> 8 & 0b11111111;

	return green;
}

unsigned char get_blue(int color) {

	unsigned char blue = color >> 16 & 0b11111111;

	return blue;
}
