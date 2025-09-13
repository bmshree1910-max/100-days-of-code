#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input n
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Loop to add first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // ith odd number
    }

    // Output
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
