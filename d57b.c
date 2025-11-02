// Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100], temp[100];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n;

    for (i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];

    printf("Array after rotation: ");
    for (i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
