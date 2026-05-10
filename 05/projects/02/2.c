#include <stdio.h>

int main(void) {

    int hh, mm;
    char prompt[] = "The equivalent 12-hour time is: ";

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hh, &mm);
    printf("\n");

    if (hh == 0) {
        printf("%s%d:%02d AM\n", prompt, 12, mm);
    } else if (hh <= 11) {
        printf("%s%d:%02d AM\n", prompt, hh, mm);
    } else {
        switch (hh) {
        case 12:
            printf("%s%d:%02d PM\n", prompt, 12, mm);
            break;
        case 13:
            printf("%s%d:%02d PM\n", prompt, 1, mm);
            break;
        case 14:
            printf("%s%d:%02d PM\n", prompt, 2, mm);
            break;
        case 15:
            printf("%s%d:%02d PM\n", prompt, 3, mm);
            break;
        case 16:
            printf("%s%d:%02d PM\n", prompt, 4, mm);
            break;
        case 17:
            printf("%s%d:%02d PM\n", prompt, 5, mm);
            break;
        case 18:
            printf("%s%d:%02d PM\n", prompt, 6, mm);
            break;
        case 19:
            printf("%s%d:%02d PM\n", prompt, 7, mm);
            break;
        case 20:
            printf("%s%d:%02d PM\n", prompt, 8, mm);
            break;
        case 21:
            printf("%s%d:%02d PM\n", prompt, 9, mm);
            break;
        case 22:
            printf("%s%d:%02d PM\n", prompt, 10, mm);
            break;
        case 23:
            printf("%s%d:%02d PM\n", prompt, 11, mm);
            break;
        default:
            printf("Invalid entry.\n");
        }
    }

    return 0;
}
