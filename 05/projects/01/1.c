#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 9) {
        printf("The number %d has one digit.\n", num);
    } else if (num <= 99) {
        printf("The number %d has two digits.\n", num);
    } else if (num <= 999) {
        printf("The number %d has three digits.\n", num);
    } else if (num <= 9999) {
        printf("The number %d has four digits.\n", num);
    } else {
        printf("The number %d has more than four digits.\n", num); // Not necessary, but why not.
    }

    return 0;
}
