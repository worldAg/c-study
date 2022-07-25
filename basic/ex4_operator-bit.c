#include <stdio.h>

int main(void)
{
	/* 비트 연산자(Bitwise Operators)
	* 비트 논리 연산자
		• & : 비트 논리곱(AND). 모두 참일 때 참.
		• | : 비트 논리합(OR). 서로 다를 때만 참.
		• ^ : 비트 배타적 논리합(XOR). 모두 거짓일 때 참.
		• ~ : 비트 부정(NOT). 피연산자의 비트를 반전시킴.
	* 비트 이동 연산자
		• << : 비트 값을 좌측으로 이동.
		• >> : 비트 값을 우측으로 이동.
	*/
	int a = 10; // 비트열 00000000 00000000 00000000 00001010
	int b = 12; // 비트열 00000000 00000000 00000000 00001100

	printf("a & b = %d\n", a & b);
	printf("a | b = %d\n", a | b);
	printf("a ^ b = %d\n", a ^ b);
	printf("~a = %d\n", ~a);
	printf("a << b = %d\n", a << b);
	printf("a >> b = %d\n", a >> b);

	/* 결과)
		a & b = 8
		a | b = 14
		a ^ b = 6
		~a = -11
		a << b = 40960
		a >> b = 0
	*/

	return 0;
}