#include <stdio.h>

int main() {

    /* ������ �������� ����ϱ� */

    int number = 1234;
    int div = 10;
    int result = 0;
    
    while (number > 0) {
        result = result * div;
        result = result + number % div;
        number = number / div;
    }

    printf("1234�� ������ = %d", result);

}
