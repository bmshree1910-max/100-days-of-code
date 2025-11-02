// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);

    char *word_start = str;
    for (char *p = str; ; p++) {
        if (*p == ' ' || *p == '\0') {
            reverse(word_start, p - 1);
            if (*p == '\0')
                break;
            word_start = p + 1;
        }
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
