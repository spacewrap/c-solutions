// Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays
// the number in the form xxx.xxx.xxx:
//
// Enter a phone number: [(xxx) xxx-xxxx] (404) 817-6900
// You entered 404.817.6900
//

#include <stdio.h>

int main(void) {
    int grp1, grp2, grp3;

    printf("Enter a phone number: [(xxx) xxx-xxxx]");
    scanf("(%d) %d-%d", &grp1, &grp2, &grp3);
    printf("You entered %d.%d.%d\n", grp1, grp2, grp3);

    return 0;
}
