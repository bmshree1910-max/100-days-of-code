// Q127.c
#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *in = fopen("input.txt", "r");
    if (!in) { perror("input.txt"); return 1; }
    FILE *out = fopen("output.txt", "w");
    if (!out) { perror("output.txt"); fclose(in); return 1; }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper((unsigned char)ch), out);
    }

    fclose(in);
    fclose(out);
    printf("Converted input.txt -> output.txt\n");
    return 0;
}
