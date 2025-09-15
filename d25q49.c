#include <stdio.h>

int main() {
    int i, j;

    // Outer loop: rows 1 to 5
    for (i = 1; i <= 5; i++) {
        // Inner loop: print from (6 - i) to 5
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");  // move to next row
    }

    return 0;
}
