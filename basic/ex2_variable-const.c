#include <stdio.h>

int main(void)
{
	/* ���� ���� �� const�� ����ϸ� �� ���� �Ұ�
		�� ���� �Ұ��ϹǷ� �ݵ�� ����� ���ÿ� �ʱ�ȭ�ؾ� �ϸ�,
		�ʱ�ȭ���� ���� ��� ������ �� ��� ��.
	*/
	int income = 0;               // �ҵ��
	double tax;                   // ����
	const double tax_rate = 0.12; // ����

	income = 456;
	tax = income * tax_rate; // ���� ���
	printf("������ %.1f�Դϴ�.", tax);

	return 0;
}