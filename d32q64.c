#include <stdio.h>
int main() {
    long num;
    int count[10] = {0}, digit, max=0, maxDigit=0;
    printf("Enter an integer: ");
    scanf("%ld", &num);
    if (num < 0) num = -num; // handle negative
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (digit = 0; digit < 10; digit++) {
        if (count[digit] > max) {
            max = count[digit];
            maxDigit = digit;
        }
    }
    printf("Digit %d occurred the most (%d times)\n", maxDigit, max);
    return 0;
}
