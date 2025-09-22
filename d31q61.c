#include <stdio.h>
int main() {
    int n, i, key, found=0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            found=1;
            break;
        }
    }
    if (!found)
        printf("Not found\n");
    return 0;
}
