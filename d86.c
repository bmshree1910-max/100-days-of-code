// Q136.c
#include <stdio.h>

typedef enum { ADD=1, SUBTRACT, MULTIPLY } Choice;

int main(void) {
    int x = 10, y = 4;
    Choice c = MULTIPLY;
    switch (c) {
        case ADD:      printf("%d\n", x + y); break;
        case SUBTRACT: printf("%d\n", x - y); break;
        case MULTIPLY: printf("%d\n", x * y); break;
        default: puts("Invalid");
    }
    return 0;
}
