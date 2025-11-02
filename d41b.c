// Q112: Kadane's algorithm for maximum subarray sum.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0], currentSum = arr[0];
    for (int i = 1; i < n; i++) {
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum = %d\n", maxSum);
    return 0;
}
