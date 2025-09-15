#include <stdio.h>

int main() {
    int i, j;

    // First part: 1 to 5 stars
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*\n");  // each star on a new line
        }
    }

    // Second part: 4 down to 1 stars
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*\n");  // each star on a new line
        }
    }

    return 0;
}
