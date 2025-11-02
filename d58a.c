// Q69: Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = INT_MIN, second = INT_MIN;
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("No second largest element (all equal).\n");
    else
        printf("Second largest = %d\n", second);

    return 0;
}
