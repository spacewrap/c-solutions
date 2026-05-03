// What output do the following calls of printf produce?
// (a) printf("%6d, %4d", 86, 1040);
// (b) printf("%12.5e", 30.253);
// (c) printf("%.4f", 83.162);
// (d) printf("%-6.2g"), .0000009979);

// answers
// (a) "    86, 1040"
// (b) " 3.025300+e1"
// (c) "83.1620"
// (d) "79e-10"

#include <stdio.h>

int main(void) {
    printf("%11.4g\n", 0.000031729);
    printf("%-8.2eHEJ\n", 0.74831);
    printf("%8.5f\n", 0.00219);
    printf("%.3g\n", 9285.471);
    return 0;
}
