// Q95: Check if one string is rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
