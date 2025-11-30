// Q149.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    float marks;
} Student;

int main(void) {
    Student *p = malloc(sizeof(Student));
    if (!p) { perror("malloc"); return 1; }

    strcpy(p->name, "Diana");
    p->id = 777;
    p->marks = 93.5;

    printf("Name: %s\nID: %d\nMarks: %.2f\n", p->name, p->id, p->marks);
    free(p);
    return 0;
}
