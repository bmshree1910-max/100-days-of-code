#include <stdio.h>

int main() {
    int a, b, i, hcf = 1;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find smaller number
    int min = (a < b) ? a : b;

    // Loop to find HCF
    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF (GCD) of %d and %d is %d\n", a, b, hcf);

    return 0;
}
