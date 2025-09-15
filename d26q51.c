#include <stdio.h>

int main() {
    int i, j;

    // Outer loop: rows
    for (i = 1; i <= 5; i++) {
        // Inner loop: numbers from (6 - i) to 5
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
