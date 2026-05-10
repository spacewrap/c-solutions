/* Computes a Universal Product Code check digit */

#include <stdio.h>
int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, s1, s2, total;

    printf("Enter the EAN (12 digits): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    s1 = n2 + n4 + n6 + n8 + n10 + n12;
    s2 = n1 + n3 + n5 + n7 + n9 + n11;
    total = 3 * s1 + s2;
    printf("Check digit: %d\n", 9 - (total - 1) % 10);

    return 0;
}
