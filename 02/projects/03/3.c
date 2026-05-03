#include <math.h>
#include <stdio.h>

int main() {

    double r;

    printf("Enter sphere radius(m): ");
    scanf("%lf", &r);

    double volume = (4.0 / 3.0) * M_PI * (r * r * r);
    printf("Volume of a spehere with a %.2f meter radius: %.2f\n", r, volume);

    return 0;
}
