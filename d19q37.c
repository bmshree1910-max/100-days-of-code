#include <stdio.h>

int main() {
    int a, b, max, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Start from the larger number
    max = (a > b) ? a : b;
    lcm = max;

    // Loop to find LCM
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
