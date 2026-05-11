#include <stdio.h>

int main(void) {
    int d1, d2, m1, m2, y1, y2, equal;

    printf("Enter first date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    printf("Enter second date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d2, &m2, &y2);

    equal = 0;

    if (d1 == d2 && m1 == m2 && y1 == y2) {
        printf("Dates are equal.\n");
        equal = 1;
    } else if (y1 < y2) {
        printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d\n", d1, m1, y1, d2, m2, y2);
    } else if (m1 < m2 && y1 == y2) {
        printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d\n", d1, m1, y1, d2, m2, y2);
    } else if (d1 < d2 && m1 == m2 && y1 == y2) {
        printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d\n", d1, m1, y1, d2, m2, y2);
    } else if (!equal) {
        printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d\n", d2, m2, y2, d1, m1, y1);
    } else {
        printf("ERROR1: Something went wrong.\n");
    }

    return 0;
}
