#include <stdio.h>

int main(void)
{
	/* 정수형을 양수 전용으로 쓰고 싶을 때 'unsigned' 사용(unsigned가 없다면 signed 자료형인 것)
		- 부호 비트(sign bit)를 고려하지 않고 항상 양수로 처리되도록 함
		- 예로 4Byte int형은 -2147483648 ~ 2147483648까지 값 저장이 가능한데, unsigned를 사용하면 0 ~ 4294967295까지 저장 가능
		- char, short, long 등 모두 사용 가능
		- 출력 시에는 %u로 출력(long형은 %lu)
		- 음수는 그 절대값을 2의 보수로 저장함으로 %d로 큰 양수를 출력하면 음수가 출력될 수 있음에 유의. 반대로 음수를 %u로 큰 양수 출력 가능.
	*/
	unsigned int i;

	i = 4294967295;
	printf("%d\n", i); // -1 (%d로 큰 양수를 출력하면 음수로 출력될 수 있음)

	i = -1;
	printf("%u\n", i); // 4294967295

}