// Q138.c
#include <stdio.h>

typedef enum { X=0, Y, Z, W } MyEnum;

int main(void) {
    const char *names[] = {"X","Y","Z","W"};
    for (int i = X; i <= W; i++)
        printf("%s = %d\n", names[i], i);
    return 0;
}
