// Q128.c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_vowel(char c) {
    char *v = "AEIOU";
    c = toupper((unsigned char)c);
    return strchr(v, c) != NULL;
}

int main(void) {
    FILE *fp = fopen("file.txt", "r");
    if (!fp) { perror("file.txt"); return 1; }

    int ch;
    long vowels = 0, consonants = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            if (is_vowel((char)ch)) vowels++;
            else consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %ld\nConsonants: %ld\n", vowels, consonants);
    return 0;
}
