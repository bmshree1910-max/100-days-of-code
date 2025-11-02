// Q108: Product of all elements except self (without division, O(n)).
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[100], left[100], right[100], ans[100];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    left[0] = 1;
    for (int i = 1; i < n; i++)
        left[i] = left[i - 1] * nums[i - 1];

    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        right[i] = right[i + 1] * nums[i + 1];

    for (int i = 0; i < n; i++)
        ans[i] = left[i] * right[i];

    printf("Product array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);
    printf("\n");

    return 0;
}
