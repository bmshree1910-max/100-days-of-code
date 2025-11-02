// Q72: Find sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[10][10];
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum += mat[i][j];

    printf("Sum of all elements = %d\\n", sum);
    return 0;
}
