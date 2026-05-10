#include <stdio.h>

int main(void) {

    int num, num1, num2, num3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    num1 = num / 10;
    num3 = num % 10;
    num2 = num1 % 10;
    printf("The reversal is: %d%d%d\n", num3, num2, num1 / 10);

    return 0;
}
