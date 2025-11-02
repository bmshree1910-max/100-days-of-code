// Q117: Merge two sorted arrays into one sorted array.
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[100];
    printf("Enter %d sorted elements: ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[100];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int c[200], i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < m)
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j++];

    printf("Merged array: ");
    for (int t = 0; t < k; t++)
        printf("%d ", c[t]);
    printf("\n");

    return 0;
}
