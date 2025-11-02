// Q119: Find the repeated element in an array.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter %d elements (one repeated): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("Repeated element = %d\n", arr[i]);
                return 0;
            }
        }
    }

    printf("No repetition found.\n");
    return 0;
}
