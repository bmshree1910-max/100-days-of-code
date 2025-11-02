// Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0}, i, found = 0;
    printf("Enter a lowercase string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        int idx = str[i] - 'a';
        if (freq[idx] == 1) {
            printf("First repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
        freq[idx]++;
    }

    if (!found)
        printf("No repeating character found.\n");

    return 0;
}
