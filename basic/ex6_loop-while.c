#include <stdio.h>

int main(void)
{
	/* while문
		조건식을 먼저 검사하고 조건식인 참(true)일 동안 실행문 반복
	*/

	int a = 1;

	if (a != 0) // if문 실행문이 반복문 하나라면 중괄호 생략 가능. 그래도 구분을 위해 사용 권장.
		while (a < 10)
		{
			a *= 2;
		}

	printf("while문: a = %d\n", a); // while문: a = 16


	/* do ~ while문
		일단 반복할 문장을 수행한 후에 조건 검사.
		조건식과 관계 없이(조건식이 거짓이어도) 반복할 문장을 최소 한 번은 무조건 수행.
	*/
	a = 20;
	do
	{
		a *= 2;
	} while (a < 10);
	printf("do ~ while문(조건식 거짓): a = %d\n", a); // do ~ while문(조건식 거짓): a = 40

	a = 1;
	do
	{
		a *= 2;
	} while (a < 10);
	printf("do ~ while문: a = %d\n", a); // do ~ while문: a = 16

	// 위의 do ~ while문은 아래와 같이 사용 가능. 그러나 위처럼 사용하는 것을 권장.
	do a *= 2; while (a < 10);


	/* 무한 반복문 */
	while (1) // 조건식이 항상 참(1)이면 무한 반복
	{
		printf("Be happy!\n");
	}


	return 0;
}