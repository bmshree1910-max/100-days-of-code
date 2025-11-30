// Q137.c
#include <stdio.h>

typedef enum { ADMIN, USER, GUEST } Role;

int main(void) {
    Role r = ADMIN;
    switch (r) {
        case ADMIN: puts("Welcome Admin: full access"); break;
        case USER:  puts("Welcome User: limited access"); break;
        case GUEST: puts("Welcome Guest: read-only"); break;
    }
    return 0;
}
