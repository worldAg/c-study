#include <stdio.h>

int main()
{
	int i, sum = 0;
	
	for (i = 1; i <= 10; i += 2) {
		if (i % 2 && i % 3) // 1을 정수로 나누면 몫은 0, 나머지는 1 
			continue; // 반복문 처음으로 돌아감
		sum += i;
	}

	printf("i = %d, sum = %d", i, sum); // i = 11, sum = 12
	
	return 0;
}