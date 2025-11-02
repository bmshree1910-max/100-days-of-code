// Q109: Maximum sum of all subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    int arr[100];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = 0, windowSum = 0;

    for (int i = 0; i < k; i++)
        windowSum += arr[i];
    maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum sum of subarrays of size %d = %d\n", k, maxSum);
    return 0;
}
