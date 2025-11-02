// Q124: Copy all contents from source file to destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcName[50], destName[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", srcName);
    printf("Enter destination filename: ");
    scanf("%s", destName);

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("File copied successfully from '%s' to '%s'.\n", srcName, destName);
    return 0;
}
