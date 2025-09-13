#include <stdio.h>

int main() {
    int bin, remainder, complement = 0, place = 1;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%d", &bin);

    int temp = bin;

    // Loop to find 1's complement
    while (bin != 0) {
        remainder = bin % 10;

        if (remainder == 0)
            complement += 1 * place;
        else if (remainder == 1)
            complement += 0 * place;
        else {
            printf("Invalid binary number!\n");
            return 0;
        }

        place *= 10;
        bin /= 10;
    }

    printf("1's Complement of %d = %d\n", temp, complement);

    return 0;
}
