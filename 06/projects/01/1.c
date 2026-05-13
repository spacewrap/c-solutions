#include <stdio.h>

int main(void) {
    double n, largest = 0;

    for (;;) {
        printf("Enter a number: ");
        scanf("%lf", &n);

        if (n <= 0) {
            break;
        } else if (n > largest) {
            largest = n;
        }
    }
    printf("The largest number entered was: %.2lf\n", largest);
    return 0;
}
