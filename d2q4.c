#include <stdio.h>
#define PI 3.1416   // Defining value of π

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Operations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output results
    printf("\nResults:\n");
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
