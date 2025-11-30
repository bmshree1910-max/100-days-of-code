// Q150.c
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float salary;
} Employee;

int main(void) {
    Employee emp;        // normal structure variable
    Employee *ptr = &emp; // pointer to structure

    // Modify values using pointer and -> operator
    printf("Enter name age salary:\n");
    scanf("%49s %d %f", ptr->name, &ptr->age, &ptr->salary);

    // Display values using pointer
    printf("\nEmployee Details:\n");
    printf("Name   : %s\n", ptr->name);
    printf("Age    : %d\n", ptr->age);
    printf("Salary : %.2f\n", ptr->salary);

    return 0;
}
