// Q114: Find length of longest substring without repeating characters.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int maxLen = 0;
    for (int i = 0; i < strlen(s); i++) {
        int visited[256] = {0};
        int len = 0;
        for (int j = i; j < strlen(s); j++) {
            if (visited[(int)s[j]])
                break;
            visited[(int)s[j]] = 1;
            len++;
        }
        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeats = %d\n", maxLen);
    return 0;
}
