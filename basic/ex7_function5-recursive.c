#include <stdio.h>

/* ���ȣ�� �Լ�(recursive call function)
	- �Լ� ������ �ڽ��� ȣ���ϴ� �Լ�
	- �ݺ��� ���� ���ǽ��� �����ؾ� ��. �׷��� ������ �Ҵ�� ���� �ݺ�(���� ȣ��)�Ǿ� ���� �޸𸮸� ��� ����ϰ� ���� ����ʿ� ����!
	- �ݺ����� �ٸ� ���� ��� �Լ��� ���� ȣ���� ���� �ƴ϶� ������ ȣ���� ������ ���ư��ٴ� ��.
	- �Լ��� ��� ����� ��� �������� �ʰ� ��� ȣ��� ���� ��� ������ �ڿ��� ��ȯ��. �� ���� ���� �׾Ƶξ��ٰ� �ϰ� ó����.
	- ���� �ٴܰ� �޴� ������ �� ���� ��������� ������ ���� ���� ����
*/

void rec_func(int n); // �Լ� ����

int main(void)
{
	rec_func(1);

	return 0;
}

void rec_func(int n)
{
	printf("�ȳ�!\n");
	if (n == 5) return; // ȣ�� Ƚ���� 5�̸� ��ȯ�ϰ� ����. ��ȣ�� �� ���� �ڽ��� ȣ���� 25�� �������� ���ư�.

	rec_func(n + 1); // ��ȣ�� �� ȣ�� Ƚ���� 1 ����
	printf("���� ��� ȣ�� �Լ���\n");
}

/*
	��� ���)
		�ȳ�!
		�ȳ�!
		�ȳ�!
		�ȳ�!
		�ȳ�!
		���� ��� ȣ�� �Լ���
		���� ��� ȣ�� �Լ���
		���� ��� ȣ�� �Լ���
		���� ��� ȣ�� �Լ���
*/