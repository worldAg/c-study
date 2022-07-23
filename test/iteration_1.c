#include <stdio.h>

void main()
{
	int a, b;
	a = 2;

	while (a-- > 0) {
		printf("a = %d\n", a);
	}
	for (b = 0; b < 2; b++) {
		printf("a = %d\n", a++);
	}

	/*
		결과)
			a = 1
			a = 0
			a = -1
			a = 0
		* while문에서 'a = 0'을 출력 후, 0 > 0 연산 후 a의 값은 감소되어 -1이 된 다음 while문 벗어남. 그 후에 for문 실행.
	*/
}