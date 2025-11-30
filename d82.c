// Q132.c
#include <stdio.h>

typedef enum { RED, YELLOW, GREEN } Light;

int main(void) {
    Light l = YELLOW;
    switch (l) {
        case RED:    puts("Stop"); break;
        case YELLOW: puts("Wait"); break;
        case GREEN:  puts("Go");   break;
        default: puts("Unknown");
    }
    return 0;
}
