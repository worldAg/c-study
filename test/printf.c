#include <stdio.h>

int main()
{
	double d_value;
	float f_value = 5.65;
	int n;
	
	d_value = f_value;
	d_value = d_value + 0.5;
	
	n = (int)d_value;

	printf("%3.1f, %d", d_value, n);
	/*
		���) 6.1, 6
		
		- n�� d_value�� ������ ����ȯ�Ͽ� 6.15�� ���� 6���� ��ȯ�Ǿ� ����(�̶� �ݿø� �Ұ���. ���� ����.)
		- '%3.1f' �� ���� ����(�Ҽ������� ����)�� �Ҽ��� ���� ù° �ڸ����� ����϶�� �ǹ�
		- �̶� �Ҽ��� ù° �ڸ����� ǥ���� �� �ݿø� �Ǳ� ������ d_value�� �� 6.15�� 6.2�� ���
	*/
}