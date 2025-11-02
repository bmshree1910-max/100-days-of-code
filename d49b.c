// Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int n = strlen(str), i, flag = 1;
    for (i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\\n");
    else
        printf("Not Palindrome\\n");

    return 0;
}
