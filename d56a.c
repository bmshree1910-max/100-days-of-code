// Q73: Find sum of each row of a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[10][10], sum[10];
    printf("Enter matrix elements:\\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++) {
        sum[i] = 0;
        for (j = 0; j < c; j++)
            sum[i] += mat[i][j];
    }

    printf("Row sums: ");
    for (i = 0; i < r; i++)
        printf("%d ", sum[i]);
    return 0;
}
