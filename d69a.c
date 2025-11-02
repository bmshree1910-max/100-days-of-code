// Q118: Find missing number in array of 0..n.
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter %d elements (from 0 to %d, one missing): ", n, n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    printf("Missing number = %d\n", total - sum);
    return 0;
}
