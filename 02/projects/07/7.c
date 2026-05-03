#include <stdio.h>

int main(void) {
    int amount, b20, b10, b5, b1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    b20 = amount / 20;
    amount = amount - (b20 * 20);
    b10 = amount / 10;
    amount = amount - (b10 * 10);
    b5 = amount / 5;
    amount = amount - (b5 * 5);
    b1 = amount;

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", b20, b10, b5, b1);

    return 0;
}
