#include <stdio.h>

#pragma warning(disable:4996)

/* 매개변수가 없는 함수 
	- 매개변수 자리에 void를 넣어 만들기
	- 괄호 안에 void 없이 사용하는 것도 가능. 그러나 void를 사용하여 명시적으로 표현하는 것을 권장.
*/

int get_pos(void); // 함수 선언

int main(void)
{
	int res;
	res = get_pos(); // 함수 호출. 반환값은 res에 저장.

	printf("반환값: %d\n", res);

	return 0;
}

int get_pos(void) // 양수만 입력받는 get_pos()
{
	int pos;

	printf("양수 입력: ");
	scanf("%d", &pos);
	
	while (pos < 0)
	{
		printf("음수가 입력되었습니다.\n");

		printf("양수 입력: ");
		scanf("%d", &pos);
	}

	return pos;
}