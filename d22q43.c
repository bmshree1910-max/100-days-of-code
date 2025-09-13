#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, remainder, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorials of digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += factorial(remainder);
        temp /= 10;
    }

    // Check strong number
    if (sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is NOT a Strong number.\n", num);

    return 0;
}
