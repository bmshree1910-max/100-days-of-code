#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; // store original

    // Loop to calculate sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits of %d = %d\n", temp, sum);

    return 0;
}
