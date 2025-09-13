#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check using nested if–else
    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero\n");
        } else {
            printf("%d is Positive\n", num);
        }
    } else {
        printf("%d is Negative\n", num);
    }

    return 0;
}
