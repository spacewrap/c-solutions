// Write a program that formats the product information entered by the user. A session with the program should look
// like this:
//
// Enter item number: 583
// Enter unit price: 13.5
// Enter purchase date (mm/dd/yyyy):
//
// Item      Unit        Purchase
//           Price       Date
// 583       $13.50      10/24/2010

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
