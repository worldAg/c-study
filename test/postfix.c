#include <stdio.h>

int main()
{	
	int a, b;

	a = 4 * (1 / 2); // a = 0
	b = a++; // b�� 0�� �����ϰ�, a = 1
	
	printf("b = %d", b); // ��� �����? 0
}