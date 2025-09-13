#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Swap without third variable
    a = a + b;  // step 1
    b = a - b;  // step 2
    a = a - b;  // step 3

    // Output
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}
