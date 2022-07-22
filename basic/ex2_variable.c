#include <stdio.h>

int main(void)
{
	/* 변수를 통해 메모리에 저장 공간 확보
		- 정수(int) 4byte, 실수(double) 8byte
		- 문자(char) 1byte, 문자열(char 배열)은 크기 가변적

		- 주의! 컴파일러에 따라 변수의 선언 위치 제한될 수 있음
		 (C표준 이전에는 변수 선언이 아닌 문장을 사용한 후 변수 선언을 할 수 없어서 컴파일러에 따라 컴파일 에러 발생할 수 있음)

		- 변수 선언 시 처음에는 쓰레기 값이 대입되어 있으며, 초기화(최초로 값 대입)하면 쓰레기 값 제거됨
	*/
	int a, b;		// int형 변수 선언
	double da;		// double형 변수 선언
	char ch1;		// char형 변수 선언
	char ch2 = 'B'; // char형 변수 선언과 동시에 초기화

	a = 1;			// int형 변수 a에 정수 1 대입(초기화)
	da = 2.5;		// double형 변수에 실수 2.5 대입
	ch1 = 65;		// char형 변수 ch1에 문자 'A'의 아스키 코드 값으로 초기화

	printf("변수 a의 값: %d\n", a);
	//printf("변수 b의 값: %d\n", b); // 초기화 하지 않은 변수 b에는 쓰레기 값이 들어 있음
	printf("변수 da의 값: %.1lf\n", da);
	printf("아스키 코드 값이 %d인 변수 ch1의 문자: %c\n", ch1, ch1); // 아스키 코드 값이 65인 변수 ch1의 문자: A
	printf("변수 ch2의 문자 %c의 아스키 코드 값: %d\n", ch2, ch2);	 // 변수 ch2의 문자 B의 아스키 코드 값: 66

	return 0;
}