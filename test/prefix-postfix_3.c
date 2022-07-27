#include <stdio.h>

int main()
{
	int i = 3;
	int j = 4;

	if ((++i > j--) && (i++ < --j)) i = i-- + ++j;
	else j = i-- - --j;

	printf("i의 값은? %d\nj의 값은? %d", i, j);
	/* 
		출력 결과)
			i의 값은? 3
			j의 값은? 2
		풀이)
			if문에서 '++i > j--'은 '4 > 4'로 false.
			j = 4 - 2 = 2.
			j 값 연산 후 i의 값 감소되어 3.
	*/
}