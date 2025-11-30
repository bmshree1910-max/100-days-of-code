// Q134.c
#include <stdio.h>

typedef enum { SUCCESS, FAILURE, TIMEOUT } Status;

int main(void) {
    Status s = TIMEOUT;
    if (s == SUCCESS) puts("Operation succeeded.");
    else if (s == FAILURE) puts("Operation failed.");
    else if (s == TIMEOUT) puts("Operation timed out.");
    return 0;
}
