#include <stdio.h>

int main(void) {
    int hh, mm, tsm, closest, d1, d2, d3, d4, d5, d6, d7, d8;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hh, &mm);

    tsm = (hh * 60) + mm;

    d1 = tsm - 480;
    d2 = tsm - 583;
    d3 = tsm - 679;
    d4 = tsm - 767;
    d5 = tsm - 840;
    d6 = tsm - 945;
    d7 = tsm - 1140;
    d8 = tsm - 1305;

    // handle negative numbers
    d1 < 0 ? d1 = -d1 : 0;
    d2 < 0 ? d2 = -d2 : 0;
    d3 < 0 ? d3 = -d3 : 0;
    d4 < 0 ? d4 = -d4 : 0;
    d5 < 0 ? d5 = -d5 : 0;
    d6 < 0 ? d6 = -d6 : 0;
    d7 < 0 ? d7 = -d7 : 0;
    d8 < 0 ? d8 = -d8 : 0;

    closest = d1;
    // i want loops
    if (d2 < closest) {
        closest = d2;
    }
    if (d3 < closest) {
        closest = d3;
    }
    if (d4 < closest) {
        closest = d4;
    }
    if (d5 < closest) {
        closest = d5;
    }
    if (d6 < closest) {
        closest = d6;
    }
    if (d7 < closest) {
        closest = d7;
    }
    if (d8 < closest) {
        closest = d8;
    }

    // i REALLY want loops
    if (closest == d1) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    } else if (closest == d2) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    } else if (closest == d3) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    } else if (closest == d4) {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    } else if (closest == d5) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    } else if (closest == d6) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    } else if (closest == d7) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    } else if (closest == d8) {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}
