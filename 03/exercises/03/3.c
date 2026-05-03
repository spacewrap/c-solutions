// For each of the following pairs of scanf format strings, indicate wether or not the two strings are equivalent.
// If they're not, show how they can be distinguished.
//
// (a) "%d"         versus      " %d"
// (b) "%d-%d-%d"   versus      "%d -%d -%d"
// (c) "%f"         versus      "%f "
// (d) "%f.%f"      versus      "%f. %f"
//
// Answers
// (a) "%d"         versus  " %d"          // Equivalent. Scanf ignores whitespaces.
// (b) "%d-%d-%d"   versus  "%d -%d - %d" // Might be a difference here. In the first one, x - x - x might not be
// legal? (c) "%f"         versus  "%f "        // Equivalent. Scanf ignores whitespaces. itsatrap.gif (d) "%f.%f"
// versus  "%f. %f"    // Equivalent. Scanf ignores whitespaces.

#include <stdio.h>

int main(void) {

    int x;
    scanf("%d ", &x);
    printf("%d", x);
    return 0;
}
