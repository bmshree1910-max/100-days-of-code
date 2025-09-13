#include <stdio.h>

int main() {
    int i, j;

    // Outer loop → rows
    for (i = 1; i <= 5; i++) {
        // Inner loop → print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");  // move to next row
    }

    return 0;
}
