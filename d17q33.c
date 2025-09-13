#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0, remainder;
    int sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Compute sum of powers of digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Check Armstrong
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    return 0;
}
