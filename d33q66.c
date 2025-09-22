#include <stdio.h>

int main() {
    int n, i, j, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // take large enough size
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    // find position
    for (i = 0; i < n; i++) {
        if (x < arr[i]) break;
    }

    // shift elements to the right
    for (j = n; j > i; j--) {
        arr[j] = arr[j-1];
    }

    arr[i] = x;  // insert at correct position
    n++;         // increment size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
