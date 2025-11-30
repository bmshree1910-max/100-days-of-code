// Q130.c
#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

int main(void) {
    Student s[3] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 78.0},
        {"Carol",103, 92.0}
    };

    FILE *fp = fopen("students.txt", "w");
    if (!fp) { perror("students.txt"); return 1; }
    for (int i = 0; i < 3; i++)
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (!fp) { perror("students.txt"); return 1; }

    Student t;
    printf("Stored records:\n");
    while (fscanf(fp, "%49s %d %f", t.name, &t.roll, &t.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", t.name, t.roll, t.marks);
    }
    fclose(fp);
    return 0;
}
