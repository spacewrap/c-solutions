// Write a program that asks the user to enter a U.S dollar amount and then shows how to pay that amount using
// the smallest number $20, $10, $5, and $1 bills:
// Enter a dollar amount: 93
// $20 bills: 4
// $10 bills: 1
// $5 bills: 0
// $1 bills: 3
//
// Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the
// total value of the $20 bills. Repeat for the other bill sizes. Be sure to use integer values throughout, not
// floating-point numbers.

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
