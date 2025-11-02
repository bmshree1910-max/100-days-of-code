// Q97: Print initials of a name.
#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    gets(name);

    printf("Initials: ");
    if (name[0] != ' ')
        printf("%c", name[0]);

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c", name[i]);
    }
    printf("\n");
    return 0;
}
