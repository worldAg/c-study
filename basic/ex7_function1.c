#include <stdio.h>

/* �Ű������� �ִ� �Լ� */

int add(int x, int y); // add �Լ� ����

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = add(a, b); // add �Լ� ȣ��(�̶� main �Լ��� ������ ��� ���߰� add �Լ� ���� �κп� �ִ� �ڵ尡 �����)
	printf("result: %d\n", res);

	return 0;
}

int add(int x, int y) // add �Լ� ���� ����
{
	int temp; // �� ������ ���� ��� ������ ����
	temp = x + y;

	return temp; // temp �� ��ȯ
} // add �Լ��� ��