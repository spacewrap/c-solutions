#include <stdio.h>

int main(void) {
    int itmNo;
    double itmPrice;
    char date[11] = "";

    printf("Enter item number: ");
    scanf("%d", &itmNo);
    printf("Enter unit price: ");
    scanf("%lf", &itmPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%10s", date);
    printf("\n");

    printf("%-12s%-12s%-12s\n", "Item", "Unit", "Purchase");
    printf("%-12s%-12s%-12s\n", "", "Price", "Date");
    printf("%-11d$%-12.2lf%-12s\n", itmNo, itmPrice, date);

    return 0;
}
