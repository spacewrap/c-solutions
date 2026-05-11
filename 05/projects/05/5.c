#include <stdio.h>

int main(void) {
    int income;

    printf("\nEnter taxable income: ");
    scanf("%d", &income);
    printf("Tax due: ");

    if (income <= 750) {
        printf("$%.2lf\n", income * 0.01);
    } else if (income <= 2250) {
        printf("$%.2lf\n", 7.5 + ((income - 750) * 0.02));
    } else if (income <= 3750) {
        printf("$%.2lf\n", 37.5 + ((income - 2250) * 0.03));
    } else if (income <= 5250) {
        printf("$%.2lf\n", 82.5 + ((income - 3750) * 0.04));
    } else if (income <= 7000) {
        printf("$%.2lf\n", 142.5 + ((income - 5250) * 0.05));
    } else {
        printf("$%.2lf\n", 230 + ((income - 7000) * 0.06));
    }

    return 0;
}
