// Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[10][10];

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j <= i && j < c; j++)
            printf("%d ", a[i - j][j]);
    }
    printf("\n");
    return 0;
}
