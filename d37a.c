// Q103: Find the pivot index of an array.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int left = 0, right = 0;
        for (int j = 0; j < i; j++)
            left += arr[j];
        for (int j = i + 1; j < n; j++)
            right += arr[j];

        if (left == right) {
            printf("Pivot index = %d\n", i);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
