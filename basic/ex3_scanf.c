#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
	/* scanf()
		- Ű����� ������ ������ �Է� �ÿ� ���
		- ���� ���¿� �´� ��ȯ ���� ���
		- �Է��� ���� �տ� �ּ� ������ '&'�� ����(���ڿ� �Է� �ÿ��� ������ ����)
	*/

	// ������ �Ǽ� �Է�
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height); // ���̿� Ű �Բ� �Է�
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);

	// ���ڿ� ���ڿ� �Է�
	char name[10];
	char ch;

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name); // ���ڿ� �Է� �� &�� ������� ����

	printf("�����ϴ� �� ���� �ܾ�� �����ΰ���? : ");
	scanf("%c", &ch);

	printf("%s��, �ȳ��ϼ���. %c�� �����Ͻô� ����!", name, ch);
	return 0;
}