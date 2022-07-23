#include <stdio.h>

int main()
{
	int x = 0x11;
	int y, z;

	y = x & 0x0f; // 010001 & 001111
	z = x | 0x0f; // 010001 | 001111

	printf("x = %d, y = %d, z = %d", x, y, z); // x = 17, y = 1, z = 31
}