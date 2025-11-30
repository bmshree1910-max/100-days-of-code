// Q131.c
#include <stdio.h>

typedef enum { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY } Day;

int main(void) {
    for (Day d = SUNDAY; d <= SATURDAY; d++)
        printf("%d: %s\n", d,
            d==SUNDAY?"SUNDAY":d==MONDAY?"MONDAY":d==TUESDAY?"TUESDAY":
            d==WEDNESDAY?"WEDNESDAY":d==THURSDAY?"THURSDAY":
            d==FRIDAY?"FRIDAY":"SATURDAY");
    return 0;
}
