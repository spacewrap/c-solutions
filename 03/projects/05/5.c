#include <stdio.h>

int main(void) {
    int num01;
    int num02;
    int num03;
    int num04;
    int num05;
    int num06;
    int num07;
    int num08;
    int num09;
    int num10;
    int num11;
    int num12;
    int num13;
    int num14;
    int num15;
    int num16;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num01, &num02, &num03, &num04, &num05, &num06, &num07, &num08,
          &num09, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    printf("\n");
    printf("%-5d%-5d%-5d%-5d\n", num01, num02, num03, num04);
    printf("%-5d%-5d%-5d%-5d\n", num05, num06, num07, num08);
    printf("%-5d%-5d%-5d%-5d\n", num09, num10, num11, num12);
    printf("%-5d%-5d%-5d%-5d\n", num13, num14, num15, num16);

    printf("\n%10s%d %d %d %d\n%10s%d %d %d %d\n%10s%d %d\n", "Row sums: ", num01 + num02 + num03 + num04,
           num05 + num06 + num07 + num08, num09 + num10 + num11 + num12, num13 + num14 + num15 + num16,
           "Column sums: ", num01 + num05 + num09 + num13, num02 + num06 + num10 + num14,
           num03 + num07 + num11 + num15, num04 + num08 + num12 + num16,
           "Diagonal sums: ", num01 + num06 + num11 + num16, num04 + num07 + num10 + num13);

    return 0;
}
