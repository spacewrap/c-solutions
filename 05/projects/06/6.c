/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, cd, first_sum, second_sum, total;

    printf("Enter a UPC (12 digits): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    first_sum = n1 + n3 + n5 + n7 + n9 + n11;
    second_sum = n2 + n4 + n6 + n8 + n10;
    total = 3 * first_sum + second_sum;

    cd = 9 - ((total - 1) % 10);
    n12 == cd ? printf("VALID\n") : printf("NOT VALID\n");

    return 0;
}
