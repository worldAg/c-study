#include <stdio.h>

int main(void)
{
	/* switch ~ case문
		- if문은 결과가 참, 거짓 밖에 없고, 경우의 수가 많아질 수록 조건식이 많아져서 복잡해져서 처리 시간도 늘어나기 때문에,
		  단 하나의 조건식으로 많은 경우의 수를 처리할 경우 switch문을 사용함. 그러나 제약 조건이 존재.
			제약조건)
				- 조건식의 결과는 정수 또는 문자열
				- case문의 값은 반드시 상수 혹은 문자열만 가능하며(변수나 실수 X), 중복되지 않아야 함
		- case문은 보통 break를 포함. 포함하지 않을 경우, 해당 case부터 블록의 끝까지 모든 문장 실행함.
	*/
	
	int rank = 2, m = 0;

	switch(rank)
	{
		case 1:
			m += 1000;
			break;
		case 2:
			m += 100;
			break;
		case 3:
			m += 10;
			break;
		default: // rank와 일치하는 case의 값이 없을 경우
			m += 5;
			break;
	}
	
	printf("break 있는 경우: m = %d\n", m); // rank = 2이므로, 'break 있는 경우: m = 100'

	// break문이 없는 경우
	m = 0;

	switch (rank)
	{
	case 1:
		m += 1000;
	case 2:
		m += 100;
	case 3:
		m += 10;
	default:
		m += 5;
	}

	printf("break 없는 경우: m = %d\n", m); // break가 없으므로 case 2, case 3, default 실행문을 모두 수행하여 'break 없는 경우: m = 115'

	return 0;
}