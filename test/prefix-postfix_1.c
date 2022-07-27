#include <stdio.h>

int main()
{	
	int a, b;

	/* 전방형 증감 연산자 */
	a = 4 * (1 / 2); // a = 0
	b = ++a; // a를 증가시킨 후, b에 그 값을 대입

	printf("전방형: a = %d, b = %d\n", a, b); // 전방형: a = 1, b = 1


	/* 후방형 증감 연산자 */
	a = 4 * (1 / 2); // a = 0
	b = a++; // b에 a의 값 대입 후, a를 증가시킴

	printf("후방형: a = %d, b = %d\n", a, b); // 후방형: a = 1, b = 0
}