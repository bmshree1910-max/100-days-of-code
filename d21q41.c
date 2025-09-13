#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    last = num % 10;        // get last digit

    // find first digit and digit count
    digits = 0;
    while (temp != 0) {
        first = temp % 10;
        temp /= 10;
        digits++;
    }

    // if single-digit, no change
    if (digits == 1) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    // Remove first and last digit part
    int middle = (num % (int)pow(10, digits - 1)) / 10;

    // Rebuild swapped number
    swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}
