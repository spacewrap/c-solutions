#include <stdio.h>

int main(void) {
    int m, n, r, num1, num2;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &m);

    num1 = n;
    num2 = m;
    while (n) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("In lowest terms: %d/%d\n", num1 / m, num2 / m);

    return 0;
}
