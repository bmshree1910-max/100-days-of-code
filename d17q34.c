#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is NOT a Prime number.\n", num);
        return 0;
    }

    // Check divisibility
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output
    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    return 0;
}
