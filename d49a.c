// Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, specials = 0, i;
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
            specials++;
    }

    printf("Spaces = %d, Digits = %d, Special Characters = %d\n", spaces, digits, specials);
    return 0;
}
