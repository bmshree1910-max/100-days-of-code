// Q120: Change a string to sentence case and write to file.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    FILE *fp;
    char str[500];
    printf("Enter a paragraph: ");
    fgets(str, sizeof(str), stdin);

    fp = fopen("sentence_case.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    int capNext = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (capNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capNext = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            capNext = 1;
    }

    fprintf(fp, "%s", str);
    fclose(fp);
    printf("Sentence case text written to 'sentence_case.txt'\n");
    return 0;
}
