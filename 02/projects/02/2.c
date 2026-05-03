// Compute the volume of a sphere with a 10-meter radius, using the formula
// v=4/3(pi)r^3 Write the fraction 4/3 as 4.0f/3.0f (try writing it as 4/3, what
// happens?)

#include <math.h>
#include <stdio.h>

int main() {

    int r = 10;
    double volume = (4.0 / 3.0) * M_PI * (r * r * r);

    printf("Volume of a spehere with 10- meter radius: %.5f\n", volume);

    return 0;
}
