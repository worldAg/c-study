#include <stdio.h>

int main(void)
{
	/* switch ~ case��
		- if���� ����� ��, ���� �ۿ� ����, ����� ���� ������ ���� ���ǽ��� �������� ���������� ó�� �ð��� �þ�� ������,
		  �� �ϳ��� ���ǽ����� ���� ����� ���� ó���� ��� switch���� �����. �׷��� ���� ������ ����.
			��������)
				- ���ǽ��� ����� ���� �Ǵ� ���ڿ�
				- case���� ���� �ݵ�� ��� Ȥ�� ���ڿ��� �����ϸ�(������ �Ǽ� X), �ߺ����� �ʾƾ� ��
		- case���� ���� break�� ����. �������� ���� ���, �ش� case���� ����� ������ ��� ���� ������.
	*/
	
	int rank = 2, m = 0;

	switch(rank)
	{
		case 1:
			m += 1000;
			break;
		case 2:
			m += 100;
			break;
		case 3:
			m += 10;
			break;
		default: // rank�� ��ġ�ϴ� case�� ���� ���� ���
			m += 5;
			break;
	}
	
	printf("break �ִ� ���: m = %d\n", m); // rank = 2�̹Ƿ�, 'break �ִ� ���: m = 100'

	// break���� ���� ���
	m = 0;

	switch (rank)
	{
	case 1:
		m += 1000;
	case 2:
		m += 100;
	case 3:
		m += 10;
	default:
		m += 5;
	}

	printf("break ���� ���: m = %d\n", m); // break�� �����Ƿ� case 2, case 3, default ���๮�� ��� �����Ͽ� 'break ���� ���: m = 115'

	return 0;
}