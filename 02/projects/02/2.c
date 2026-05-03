#include <math.h>
#include <stdio.h>

int main() {

    int r = 10;
    double volume = (4.0 / 3.0) * M_PI * (r * r * r);

    printf("Volume of a spehere with 10- meter radius: %.5f\n", volume);

    return 0;
}
