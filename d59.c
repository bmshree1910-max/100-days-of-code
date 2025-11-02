// Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, val, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (0-based index): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    if (pos < 0 || pos > n) pos = n; // Append if out of range

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
