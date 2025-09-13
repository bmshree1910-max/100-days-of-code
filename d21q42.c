#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check perfect number
    if (sum == num && num != 0)
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is NOT a Perfect number.\n", num);

    return 0;
}
