#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;
    int hasOdd = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;  // store original number

    // Loop through digits
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {  // odd digit
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits of %d = %lld\n", temp, product);
    else
        printf("No odd digits in %d. Product = 0\n", temp);

    return 0;
}
