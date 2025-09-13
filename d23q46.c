#include <stdio.h>

int main() {
    int i, j;

    // Outer loop → rows
    for (i = 1; i <= 5; i++) {
        // Inner loop → columns
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");  // move to next row
    }

    return 0;
}
