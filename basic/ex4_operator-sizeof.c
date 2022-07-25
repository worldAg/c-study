#include <stdio.h>

int main(void)
{	/* sizeof 연산자
		- sizeof 연산자는 피연산자의 크기를 바이트 단위로 계산
		- 피연산자는 하나로 그 대상은 변수, 상수, 수식, 자료형이 될 수 있음 
		- 데이터의 크기를 확인하거나, 메모리를 동적으로 할당하는 작업에 유용하게 사용
	*/
	int a = 10;
	double b = 10.5;

	printf("sizeof(a) = %d\n", sizeof(a));                 // sizeof(a) = 4
	printf("sizeof(b) = %d\n", sizeof(b));                 // sizeof(b) = 8
	printf("sizeof(char) = %d\n", sizeof(char));           // sizeof(char) = 1
	printf("sizeof(1.5 + 1.5) = %d\n", sizeof(1.5 + 1.5)); // sizeof(1.5 + 1.5) = 8
	
	return 0;
}