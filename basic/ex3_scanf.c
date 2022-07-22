#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
	/* scanf()
		- 키보드로 변수에 데이터 입력 시에 사용
		- 변수 형태에 맞는 변환 문자 사용
		- 입력할 변수 앞에 주소 연산자 '&'를 붙임(문자열 입력 시에는 붙이지 않음)
	*/

	// 정수와 실수 입력
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height); // 나이와 키 함께 입력
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	// 문자와 문자열 입력
	char name[10];
	char ch;

	printf("이름을 입력하세요 : ");
	scanf("%s", name); // 문자열 입력 시 &를 사용하지 않음

	printf("좋아하는 한 글자 단어는 무엇인가요? : ");
	scanf("%c", &ch);

	printf("%s님, 안녕하세요. %c를 좋아하시는 군요!", name, ch);
	return 0;
}