#include <stdio.h>

void main()
{
	int a, b;
	a = 2;

	while (a-- > 0) {
		printf("a = %d\n", a);
	}
	for (b = 0; b < 2; b++) {
		printf("a = %d\n", a++);
	}

	/*
		���)
			a = 1
			a = 0
			a = -1
			a = 0
		* while������ 'a = 0'�� ��� ��, 0 > 0 ���� �� a�� ���� ���ҵǾ� -1�� �� ���� while�� ���. �� �Ŀ� for�� ����.
	*/
}