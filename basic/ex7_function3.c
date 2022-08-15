#include <stdio.h>

/* 반환값이 없는 함수 
	- 선언과 정의의 반환형에 void 사용
	- return문 생략 가능
	- 만약 함수 실행 중간에 호출한 곳으로 돌아가야 한다면, return문 단독으로 사용
	- 함수에 반환 값이 없기 때문에 함수 호출 문장을 수식의 일부로 사용할 수 없음
*/

void print_char(char ch, int cnt); // 함수 선언

int main(void)
{
	print_char('?', 10); // 함수 호출
	return 0;
}

void print_char(char ch, int cnt) // 함수 정의
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%c", ch);
	}
}