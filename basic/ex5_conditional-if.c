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
		printf("a�� b�� ���� �����ϴ�.\n");
	}


	/* if ~ else: �� �߿� �ϳ��� �ݵ�� �����ϴ� ��� */
	if (a >= 0)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}

	printf("a: %d\n", a);


	/* if ~ else if ~ else: ���� ���� ���๮���� �ݵ�� �ϳ��� �����ϴ� ��� */
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

	printf("���: %.1lf, ����: %c\n", avg, grade);


	/* if�� ��ø
		- ���� ������ �ִٸ� if�� �ȿ� if�� ��� ����
		- �����Ϸ��� if���� ��ø�� ��� else�� ���� ����� if�� ������
		  �׷��� ��(true) ���๮�� else�� ���� �⺻ if���� ����ϴ� ���, else���� �ݵ�� �߰�ȣ�� �ʿ��ϴٴ� ���� ����!
		- if ~ else if ~ else���� ��ø�� ������ �� �� ����
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

	printf("���: %.1lf, ����: %c%c\n", avg, grade, opt);


	return 0;
}