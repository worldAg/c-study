#include <stdio.h>

int main() 
{ /* 관계 연산자 ==, != */

	int a = 3 + 5, b = 1, c;
	int ap, bp;

	ap = a++; // ap에 a의 값 8 대입 후 a의 값 증가 
	bp = ++b; // b의 값 증가 후 bp에 b의 값 대입

	// true이면 1, false이면 0
	b = 3 * (ap == 8);
	c = 5 * (ap != 8);

	printf("a = %d\nb = %d\nc = %d\nap = %d\nbp = %d", a, b, c, ap, bp);
	/*
		결과)
			a = 9
			b = 3
			c = 0
			ap = 8
			bp = 2
	*/
}