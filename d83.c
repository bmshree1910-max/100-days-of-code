// Q133.c
#include <stdio.h>

typedef enum {
    JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
} Month;

int days_in_month(Month m, int leap) {
    switch (m) {
        case APR: case JUN: case SEP: case NOV: return 30;
        case FEB: return leap ? 29 : 28;
        default: return 31;
    }
}

int main(void) {
    int leap = 0; // change to 1 for leap year
    for (Month m = JAN; m <= DEC; m++)
        printf("%d -> %d days\n", m, days_in_month(m, leap));
    return 0;
}
