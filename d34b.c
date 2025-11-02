// Q98: Print initials of a name with surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    gets(name);

    int len = strlen(name);
    printf("Formatted Name: ");
    printf("%c. ", name[0]);

    for (int i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            if (strchr(name + i, ' ') == NULL)
                printf("%s", name + i);
            else
                printf("%c. ", name[i]);
        }
    }
    printf("\n");
    return 0;
}
