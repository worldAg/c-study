#include <stdio.h>

void main()
{
	char msg[50] = "Hello World! Good Luck!";
	int i = 2, number = 0;

	while (msg[i] != '!') {
		if (msg[i] == 'a' || msg[i] == 'e' || msg[i] == 'i' || msg[i] == 'o' || msg[i] == 'u')
			number++;
		i++;
	}

	printf("i = %d, number = %d", i, number); // i = 11, number = 2

}