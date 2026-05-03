#include <stdio.h>

int main(void) {
    int gs1, grpID, pubCode, itmNo, chkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &grpID, &pubCode, &itmNo, &chkDigit);
    printf("\n");

    printf("GS1 prefix: %d\nGroup Identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", gs1,
           grpID, pubCode, itmNo, chkDigit);

    return 0;
}
