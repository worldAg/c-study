#include <stdio.h>

int main()
{	
	int a, b;

	a = 4 * (1 / 2); // a = 0
	b = a++; // b에 0을 대입하고, a = 1
	
	printf("b = %d", b); // 출력 결과는? 0
}