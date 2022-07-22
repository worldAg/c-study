#include <stdio.h>

int main(void)
{
	/* 문자열 변수 담기
		문자열은 char형을 배열 형태로 만들어서 저장하는데,
		배열 선언 시 대괄호 안의 숫자를 문자열의 길이보다 1 이상 크게 잡아야 함.
		컴파일러가 문자열의 끝을 표시하기 위해 널문자(아스키 코드가 0인 문자)를 자동으로 추가하기 때문!
	*/
	char fruit[6] = "apple";
	printf("어떤 과일? %s\n", fruit); // 문자열(char 배열)은 %s로 출력

	// 초기화 외 문자열을 저장할 때는 strcpy 함수 사용
	strcpy(fruit, "mango"); // fruit에 mango 복사
	printf("어떤 과일? %s\n", fruit);

	/* 실행 결과
		어떤 과일? apple
		어떤 과일? mango
	*/

	return 0;
}