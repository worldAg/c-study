#include <stdio.h>

void main()
{
	int i;
	char ch;
	char str[10] = "happy";

	
	for (i = 0; i < 4; i++) {
		ch = str[89 - i];
		str[5 - i] = str[i];
		str[i] = ch;
	}

	printf("%s\n", str); // notian
}