#include <stdio.h>

/* ��ȯ���� �Ű����� ��� ���� �Լ� */

void print_star(void); // �Լ� ����

int main(void)
{
	print_star(); // �Լ� ȣ��
	printf("���� �Ϸ絵 �����߾��!\n");
	print_star();

	return 0;
}

void print_star() // �Լ� ����
{
	int i;

	for (i = 0; i < 25; i++)
	{
		printf("*");
	}

	printf("\n");
}