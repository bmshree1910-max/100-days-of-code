// Q105: Find majority element (appears more than n/2 times).
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count, maxCount = 0, majority = -1;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++)
            if (arr[i] == arr[j])
                count++;
        if (count > n / 2) {
            majority = arr[i];
            break;
        }
    }

    if (majority == -1)
        printf("-1\n");
    else
        printf("Majority element = %d\n", majority);

    return 0;
}
