#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // Input n
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Compute sum of series
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1;  // first term is 1
        } else {
            sum += (double)(2 * i - 1) / (2 * i);
        }
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
