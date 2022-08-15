#include <stdio.h>

/* 반환값과 매개변수 모두 없는 함수 */

void print_star(void); // 함수 선언

int main(void)
{
	print_star(); // 함수 호출
	printf("오늘 하루도 수고했어요!\n");
	print_star();

	return 0;
}

void print_star() // 함수 정의
{
	int i;

	for (i = 0; i < 25; i++)
	{
		printf("*");
	}

	printf("\n");
}