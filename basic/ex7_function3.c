#include <stdio.h>

/* ��ȯ���� ���� �Լ� 
	- ����� ������ ��ȯ���� void ���
	- return�� ���� ����
	- ���� �Լ� ���� �߰��� ȣ���� ������ ���ư��� �Ѵٸ�, return�� �ܵ����� ���
	- �Լ��� ��ȯ ���� ���� ������ �Լ� ȣ�� ������ ������ �Ϻη� ����� �� ����
*/

void print_char(char ch, int cnt); // �Լ� ����

int main(void)
{
	print_char('?', 10); // �Լ� ȣ��
	return 0;
}

void print_char(char ch, int cnt) // �Լ� ����
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%c", ch);
	}
}