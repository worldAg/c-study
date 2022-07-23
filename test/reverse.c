#include <stdio.h>

int main() {

    /* 정수를 역순으로 출력하기 */

    int number = 1234;
    int div = 10;
    int result = 0;
    
    while (number > 0) {
        result = result * div;
        result = result + number % div;
        number = number / div;
    }

    printf("1234의 역순은 = %d", result);

}
