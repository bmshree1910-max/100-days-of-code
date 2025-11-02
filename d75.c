// Q125: Open an existing file in append mode and add a new line of text.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char newline[500];

    printf("Enter filename to append text to: ");
    scanf("%s", filename);
    getchar();  // to consume leftover newline

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(newline, sizeof(newline), stdin);

    fprintf(fp, "%s", newline);
    fclose(fp);

    printf("Text successfully appended to '%s'.\n", filename);
    return 0;
}
