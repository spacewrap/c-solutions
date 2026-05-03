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
