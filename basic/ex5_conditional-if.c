#include <stdio.h>

int main(void)
{
	int a, b, c, total;
	double avg;
	char grade, opt;

	a = 20;

	if (a > 10)
	{
		b = a;
		printf("a와 b의 값은 같습니다.\n");
	}


	/* if ~ else: 둘 중에 하나를 반드시 선택하는 경우 */
	if (a >= 0)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}

	printf("a: %d\n", a);


	/* if ~ else if ~ else: 여러 개의 실행문에서 반드시 하나를 선택하는 경우 */
	a = 65, b = 90, c = 80;
	total = a + b + c;
	avg = total / 3.0;

	if (avg >= 90.0)
	{
		grade = 'A';
	}
	else if (avg >= 80.0)
	{
		grade = 'B';
	}
	else if (avg >= 70.0)
	{
		grade = 'C';
	}
	else
	{
		grade = 'F';
	}

	printf("평균: %.1lf, 학점: %c\n", avg, grade);


	/* if문 중첩
		- 선행 조건이 있다면 if문 안에 if문 사용 가능
		- 컴파일러는 if문이 중첩된 경우 else를 가장 가까운 if와 연결함
		  그래서 참(true) 실행문에 else가 없는 기본 if문을 사용하는 경우, else문에 반드시 중괄호가 필요하다는 것을 주의!
		- if ~ else if ~ else문도 중첩된 구조로 볼 수 있음
	*/
	opt = '0';

	if (avg >= 90.0)
	{
		grade = 'A';
		if (avg >= 98)
		{
			opt = '+';
		}
		else if (avg < 94)
		{
			opt = '-';
		}
	}
	else if (avg >= 80.0)
	{
		grade = 'B';
		if (avg >= 88)
		{
			opt = '+';
		}
		else if (avg < 84)
		{
			opt = '-';
		}
	}
	else if (avg >= 70.0)
	{
		grade = 'C';
		if (avg >= 78)
		{
			opt = '+';
		}
		else if (avg < 74)
		{
			opt = '-';
		}
	}
	else
	{
		grade = 'F';
	}

	printf("평균: %.1lf, 학점: %c%c\n", avg, grade, opt);


	return 0;
}