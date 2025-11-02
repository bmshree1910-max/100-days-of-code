// Q123: Count characters, words, and lines in a text file.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[50];
    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    char c, prev = ' ';
    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n')
            lines++;
        if (!isspace(c) && isspace(prev))
            words++;
        prev = c;
    }

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
