#include <stdio.h>

int main(void)
{	/* sizeof ������
		- sizeof �����ڴ� �ǿ������� ũ�⸦ ����Ʈ ������ ���
		- �ǿ����ڴ� �ϳ��� �� ����� ����, ���, ����, �ڷ����� �� �� ���� 
		- �������� ũ�⸦ Ȯ���ϰų�, �޸𸮸� �������� �Ҵ��ϴ� �۾��� �����ϰ� ���
	*/
	int a = 10;
	double b = 10.5;

	printf("sizeof(a) = %d\n", sizeof(a));                 // sizeof(a) = 4
	printf("sizeof(b) = %d\n", sizeof(b));                 // sizeof(b) = 8
	printf("sizeof(char) = %d\n", sizeof(char));           // sizeof(char) = 1
	printf("sizeof(1.5 + 1.5) = %d\n", sizeof(1.5 + 1.5)); // sizeof(1.5 + 1.5) = 8
	
	return 0;
}