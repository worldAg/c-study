#include <stdio.h>

int main()
{
	int i = 3;
	int j = 4;

	if ((++i > j--) && (i++ < --j)) i = i-- + ++j;
	else j = i-- - --j;

	printf("i�� ����? %d\nj�� ����? %d", i, j);
	/* 
		��� ���)
			i�� ����? 3
			j�� ����? 2
		Ǯ��)
			if������ '++i > j--'�� '4 > 4'�� false.
			j = 4 - 2 = 2.
			j �� ���� �� i�� �� ���ҵǾ� 3.
	*/
}