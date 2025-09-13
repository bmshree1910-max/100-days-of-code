#include <stdio.h>

int main() {
    int n, sum;

    // Input value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Operation using formula
    sum = n * (n + 1) / 2;

    // Output
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
