#include <stdio.h>

int main() 
{ /* ���� ������ ==, != */

	int a = 3 + 5, b = 1, c;
	int ap, bp;

	ap = a++; // ap�� a�� �� 8 ���� �� a�� �� ���� 
	bp = ++b; // b�� �� ���� �� bp�� b�� �� ����

	// true�̸� 1, false�̸� 0
	b = 3 * (ap == 8);
	c = 5 * (ap != 8);

	printf("a = %d\nb = %d\nc = %d\nap = %d\nbp = %d", a, b, c, ap, bp);
	/*
		���)
			a = 9
			b = 3
			c = 0
			ap = 8
			bp = 2
	*/
}