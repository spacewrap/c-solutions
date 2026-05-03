#include <stdio.h>

int main() {
    double loanTotal, interestRate, monthlyPayment, balance;

    printf("Enter amount of loan: ");
    scanf("%lf", &loanTotal);
    printf("Enter interest rate: ");
    scanf("%lf", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%lf", &monthlyPayment);
    interestRate = (interestRate / 100) / 12;
    balance = loanTotal;

    balance = balance + (balance * interestRate);
    balance = balance - monthlyPayment;
    printf("\nBalance remaining after first payment: %.2lf\n", balance);
    balance = balance + (balance * interestRate);
    balance = balance - monthlyPayment;
    printf("Balance remaining after second payment: %.2lf\n", balance);
    balance = balance + (balance * interestRate);
    balance = balance - monthlyPayment;
    printf("Balance remaining after third payment: %.2lf\n", balance);

    return 0;
}
