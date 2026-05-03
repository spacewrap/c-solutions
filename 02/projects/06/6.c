// Modify the program of Project 5 so that the polynomial is evaluated using the following formula:
// ((((3x + 2)x - 5)x-1)x + 7)x - 6

#include <stdio.h>

int main(void) {
    double x;
    double result;

    printf("Enter a value: ");
    scanf("%lf", &x);

    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Result: %.2lf\n", result);

    return 0;
}
