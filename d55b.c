// Q74: Find transpose of a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[10][10], trans[10][10];
    printf("Enter matrix elements:\\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[j][i] = mat[i][j];

    printf("Transpose:\\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\\n");
    }

    return 0;
}
