#include <stdio.h>

int main()
{
	int j;
	int sum = 0;

	for (j = 2; j <= 70; j += 5) sum = sum + 1;

	printf("j = %d, sum = %d", j, sum); // j = 72, sum = 14
}