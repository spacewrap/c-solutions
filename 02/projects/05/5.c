#include <stdio.h>

int main(void) {
    double x;
    double result;

    printf("Enter a value: ");
    scanf("%lf", &x);

    result = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;

    printf("Result: %.2lf\n", result);

    return 0;
}
