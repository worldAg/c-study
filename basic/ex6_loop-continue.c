#include <stdio.h>

int main(void)
{
	/* break문
		- 반복문 안에서 반복을 즉시 끝낼 때 사용(무한 반복문의 반복을 끝낼 때도 사용). 
		- 주로 if문과 함께 사용해서 특정 조건을 만족할 때 반복문을 벗어나도록 함.
		- 자신을 포함하는 반복문 하나만 벗어남.
	*/
	int i;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break; // 누적한 값이 30보다 크면 반복문을 끝냄
	}
	printf("누적한 값: %d\n", sum);
	printf("마지막으로 더한 값: %d\n", i);
	printf("------------------------------\n");

	// 무한 반복문에서 벗어나기
	int cnt = 0;
	while (1)
	{
		printf("Be happy!\n");
		cnt++;
		if (cnt == 5) break; // cnt의 값이 5가 되면 반복문을 끝냄
	}
	printf("------------------------------\n");


	/* continue문
		- 반복이 진행되는 중 continue문을 만나면 반복문의 끝으로 이동하여 다음 반복으로 넘어감(반복문의 일부를 건너뜀).
		- continue문 이후의 문장을 수행하지 않고 다음 반복으로 넘어가기 때문에 반복문 전체를 벗어나는 break문과 다름.
	*/
	// 3의 배수를 건너뛰고 1부터 100까지 합을 구함
	sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0) // i가 3의 배수면, sum += i를 건너뛰고 블록 끝으로 간 뒤 다시 반복
		{
			continue;
		}
		sum += i;
	}
	printf("sum = %d\n", sum);


	return 0;
}