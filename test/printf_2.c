#include <stdio.h>

int main()
{
	double d_value;
	float f_value = 5.65;
	int n;
	
	d_value = f_value;
	d_value = d_value + 0.5;
	
	n = (int)d_value;

	printf("%3.1f, %d", d_value, n);
	/*
		출력 결과) 6.1, 6
		
		- n은 d_value를 정수로 형변환하여 6.15는 정수 6으로 변환되어 대입(이때 반올림 불가능. 오직 버림.)
		- '%3.1f' 세 개의 공간(소수점까지 포함)에 소수점 이하 첫째 자리까지 출력하라는 의미
		- 이때 소수점 첫째 자리까지 표현할 때 반올림 되기 때문에 d_value의 값 6.15는 6.2로 출력
	*/
}