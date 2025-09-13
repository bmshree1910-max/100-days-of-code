#include <stdio.h>
#include <math.h>   // Required for pow()

int main() {
    float principal, rate, time, SI, CI;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Operations
    SI = (principal * rate * time) / 100;
    CI = principal * pow((1 + rate / 100), time) - principal;

    // Output
    printf("\nResults:\n");
    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}
