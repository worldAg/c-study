#include <stdio.h>

int main()
{
	int i, sum = 0;
	
	for (i = 1; i <= 10; i += 2) {
		if (i % 2 && i % 3) // 1�� ������ ������ ���� 0, �������� 1 
			continue; // �ݺ��� ó������ ���ư�
		sum += i;
	}

	printf("i = %d, sum = %d", i, sum); // i = 11, sum = 12
	
	return 0;
}