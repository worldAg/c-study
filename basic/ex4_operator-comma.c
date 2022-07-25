#include <stdio.h>

int main(void)
{	/* 콤마 연산자
		- 콤마 연산자는 한 번에 여러 개의 수식을 차례로 나열해야 할 때 사용
		- 왼쪽부터 오른쪽으로 차례대로 연산 수행하며, 가장 오른쪽에 있는 피연산자가 최종 결괏값이 됨
		- 콤마 연산자는 대입 연산자보다 우선순위가 낮은 유일한 연산자로, 대입 연산자를 사용할 때도 반드시 괄호 필요
	*/
	int a = 10, b = 20, c = 10, d = 20;
	int res;

	res = (++a, ++b); // 차례로 연산이 수행되고 res에 저장되는 값은 증가된 b의 값
	printf("a = %d, b = %d, res = %d\n", a, b, res); // a = 11, b = 21, res = 21

	res = ++c, ++d; // 대입 연산자가 우선이므로, res = ++c 연산 후, ++d 연산 수행
	printf("c = %d, d = %d, res = %d\n", c, d, res); // c = 11, d = 21, res = 11

	return 0;
}