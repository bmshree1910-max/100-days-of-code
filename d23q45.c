#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // Input n
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Compute sum of series
    for (i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (4 * i - 1);
    }

    // Output result
    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
