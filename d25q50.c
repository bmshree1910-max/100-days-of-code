#include <stdio.h>

int main() {
    int i, j;

    // Outer loop: rows 1 to 5
    for (i = 1; i <= 5; i++) {
        // Inner loop: print stars (5 - i + 1)
        for (j = 1; j <= 6 - i; j++) {
            printf("*");
        }
        printf("\n");  // move to next row
    }

    return 0;
}
