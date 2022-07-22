#include <stdio.h>

int main(void)
{
	/* 변수 선언 시 const를 사용하면 값 변경 불가
		값 변경 불가하므로 반드시 선언과 동시에 초기화해야 하며,
		초기화하지 않을 경우 쓰레기 값 사용 됨.
	*/
	int income = 0;               // 소득액
	double tax;                   // 세금
	const double tax_rate = 0.12; // 세율

	income = 456;
	tax = income * tax_rate; // 세금 계산
	printf("세금은 %.1f입니다.", tax);

	return 0;
}