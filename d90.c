// Q140.c
#include <stdio.h>

typedef enum { MALE, FEMALE, OTHER } Gender;

typedef struct {
    char name[50];
    Gender g;
} Person;

int main(void) {
    Person p = {"Sam", FEMALE};
    printf("Name: %s\nGender: %s\n", p.name,
           p.g==MALE?"Male":p.g==FEMALE?"Female":"Other");
    return 0;
}
