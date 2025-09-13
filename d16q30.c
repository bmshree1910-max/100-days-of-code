#include <stdio.h>

int main() {
    int num, binary = 0, place = 1, remainder;

    // Input number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    int temp = num;  // store original for display

    // Loop to convert decimal to binary
    while (num > 0) {
        remainder = num % 2;          // Get last binary digit
        binary += remainder * place;  // Build binary number
        place *= 10;                  // Shift place value
        num /= 2;                     // Reduce number
    }

    printf("Binary representation of %d = %d\n", temp, binary);

    return 0;
}
