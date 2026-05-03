// Write a program that asks the user to enter a dollars-and-cents amount, then
// displays the amount with 5% tax added:
// Enter an amount: 100
// With tax added: $105

#include <stdio.h>

int main(void) {
    double amount;

    printf("Enter an amount: ");
    scanf("%lf", &amount);
    printf("With tax added: $%.2lf\n", amount + (amount * 0.05));

    return 0;
}
