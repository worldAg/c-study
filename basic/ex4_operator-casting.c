#include <stdio.h>

int main(void)
{	/* 형변환 연산자 
		- double형은 저장 공간이 크고 연산 속도가 느리며 오차가 발생하기 때문에, 
		  변수 선언은 되도록 int형을 사용하고 나누기 연산처럼 필요할 때만 형변환하여 사용하는 것이 좋음!
		- 형변환 연산자를 사용하지 않아도 데이터의 형태가 자동으로 바뀔 수도 있지만(묵시적 형변환), 값 변형이 생길 수 있으므로 명시적으로 사용하는 것이 좋음
		- double형 -> int형으로 형변환 시 소수점 이하는 버림되기 때문에 데이터의 손실이 일어남
	*/

	int a = 10, b = 3;
	double res;

	res = ((double)a) / ((double)b); // a와 b의 값이 실수형으로 변환
	
	printf("a = %d, b = %d\n", a, b);
	printf("a / b = %.1lf\n", res);

	a = (int)res;
	printf("(int)%.1lf의 결과: %d", res, a);

	/* 실행 결과
		a = 10, b = 3
		a / b = 3.3
		(int)3.3의 결과: 3
	*/

	return 0;
}