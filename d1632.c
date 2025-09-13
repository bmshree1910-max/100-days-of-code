#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // keep a copy

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // Check palindrome
    if (original == reverse)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is NOT a Palindrome number.\n", original);

    return 0;
}
