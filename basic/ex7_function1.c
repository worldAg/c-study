#include <stdio.h>

/* 매개변수가 있는 함수 */

int add(int x, int y); // add 함수 선언

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = add(a, b); // add 함수 호출(이때 main 함수의 실행은 잠시 멈추고 add 함수 정의 부분에 있는 코드가 실행됨)
	printf("result: %d\n", res);

	return 0;
}

int add(int x, int y) // add 함수 정의 시작
{
	int temp; // 두 정수의 합을 잠시 저장할 변수
	temp = x + y;

	return temp; // temp 값 반환
} // add 함수의 끝