#include <stdio.h>

void main()
{
	int i, j, sum = 0;
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			if (j % 3 == 0) continue;
			if (i % 4 == 0) break;
			sum++;
		}
	}
	printf("i = %d, j = %d, sum = %d", i, j, sum); // i = 10, j = 10, sum = 42
}