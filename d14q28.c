#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // Use long long for large results
    int foundEven = 0;      // To check if any even number exists

    // Input n
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Loop to calculate product of even numbers
    for (i = 2; i <= n; i += 2) {
        product *= i;
        foundEven = 1;
    }

    // Output
    if (foundEven)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}
