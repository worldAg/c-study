#include <stdio.h>

int main(void)
{
	/* ������ ���� �޸𸮿� ���� ���� Ȯ��
		- ����(int) 4byte, �Ǽ�(double) 8byte
		- ����(char) 1byte, ���ڿ�(char �迭)�� ũ�� ������

		- ����! �����Ϸ��� ���� ������ ���� ��ġ ���ѵ� �� ����
		 (Cǥ�� �������� ���� ������ �ƴ� ������ ����� �� ���� ������ �� �� ��� �����Ϸ��� ���� ������ ���� �߻��� �� ����)

		- ���� ���� �� ó������ ������ ���� ���ԵǾ� ������, �ʱ�ȭ(���ʷ� �� ����)�ϸ� ������ �� ���ŵ�
	*/
	int a, b;		// int�� ���� ����
	double da;		// double�� ���� ����
	char ch1;		// char�� ���� ����
	char ch2 = 'B'; // char�� ���� ����� ���ÿ� �ʱ�ȭ

	a = 1;			// int�� ���� a�� ���� 1 ����(�ʱ�ȭ)
	da = 2.5;		// double�� ������ �Ǽ� 2.5 ����
	ch1 = 65;		// char�� ���� ch1�� ���� 'A'�� �ƽ�Ű �ڵ� ������ �ʱ�ȭ

	printf("���� a�� ��: %d\n", a);
	//printf("���� b�� ��: %d\n", b); // �ʱ�ȭ ���� ���� ���� b���� ������ ���� ��� ����
	printf("���� da�� ��: %.1lf\n", da);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� ch1�� ����: %c\n", ch1, ch1); // �ƽ�Ű �ڵ� ���� 65�� ���� ch1�� ����: A
	printf("���� ch2�� ���� %c�� �ƽ�Ű �ڵ� ��: %d\n", ch2, ch2);	 // ���� ch2�� ���� B�� �ƽ�Ű �ڵ� ��: 66

	return 0;
}