#include <stdio.h>

#pragma warning(disable:4996)

/* �Ű������� ���� �Լ� 
	- �Ű����� �ڸ��� void�� �־� �����
	- ��ȣ �ȿ� void ���� ����ϴ� �͵� ����. �׷��� void�� ����Ͽ� ��������� ǥ���ϴ� ���� ����.
*/

int get_pos(void); // �Լ� ����

int main(void)
{
	int res;
	res = get_pos(); // �Լ� ȣ��. ��ȯ���� res�� ����.

	printf("��ȯ��: %d\n", res);

	return 0;
}

int get_pos(void) // ����� �Է¹޴� get_pos()
{
	int pos;

	printf("��� �Է�: ");
	scanf("%d", &pos);
	
	while (pos < 0)
	{
		printf("������ �ԷµǾ����ϴ�.\n");

		printf("��� �Է�: ");
		scanf("%d", &pos);
	}

	return pos;
}