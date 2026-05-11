/* Calculates a broker's commission */

#include <stdio.h>

int main(void) {
    double commission, commission2, pps, value;
    int shares;

    printf("Enter trade details (shares @ price per share): ");
    scanf("%d@%lf", &shares, &pps);

    value = pps * shares;

    if (value < 2500.00)
        commission = 30.00 + .017 * value;
    else if (value < 6250.00)
        commission = 56.00 + .0066 * value;
    else if (value < 20000.00)
        commission = 76.00 + .0034 * value;
    else if (value < 50000.00)
        commission = 100.00 + .0022 * value;
    else if (value < 500000.00)
        commission = 155.00 + .0011 * value;
    else
        commission = 255.00 + .0009 * value;

    if (commission < 39.00)
        commission = 39.00;

    printf("\nValue of trade: $%0.2lf\n\n", value);
    printf("Commission 1: $%.2f\n", commission);

    if (shares < 2000) {
        commission2 = 33 + (shares * 0.03);
    } else {
        commission2 = 33 + (shares * 0.02);
    }

    printf("Commission 2: $%.2lf\n", commission2);

    return 0;
}
