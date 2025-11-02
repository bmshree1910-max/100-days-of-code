// Q83: Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int v = 0, c = 0, i;
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\\0'; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels = %d, Consonants = %d\\n", v, c);
    return 0;
}
