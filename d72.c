// Q122: Read and print contents of an existing file using fgets().
#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file 'info.txt'.\n");
        return 1;
    }

    printf("Contents of 'info.txt':\n\n");
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
