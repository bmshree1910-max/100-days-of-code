// Q120: Convert a string to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

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

    printf("Sentence case: %s\n", str);
    return 0;
}
