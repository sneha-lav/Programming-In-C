//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <string.h>

// Q150: Modify and display struct via pointer using -> operator

struct Student {
    int roll;
    char name[40];
    float cgpa;
};

void updateCGPA(struct Student *p, float newCgpa) {
    p->cgpa = newCgpa;
}

void renameStudent(struct Student *p, const char *newName) {
    // safe copy with manual null-termination
    strncpy(p->name, newName, sizeof(p->name) - 1);
    p->name[sizeof(p->name) - 1] = '\0';
}

void printStudent(const struct Student *p) {
    printf("Roll: %d\n", p->roll);
    printf("Name: %s\n", p->name);
    printf("CGPA: %.2f\n", p->cgpa);
}

int main(void) {
    struct Student s = {101, "Divyanshi Thapa", 8.1f};
    struct Student *ptr = &s; // pointer to struct

    printf("Before update:\n");
    printStudent(ptr);

    // modify via pointer
    updateCGPA(ptr, 8.6f);
    renameStudent(ptr, "Divyanshi T.");

    printf("\nAfter update:\n");
    printStudent(ptr);

    return 0;
}
