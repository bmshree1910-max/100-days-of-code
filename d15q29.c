#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // Use long long to handle large results

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Factorial using loop
    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}
