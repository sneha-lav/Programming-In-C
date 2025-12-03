//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Q148: Compare two structs for equality

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

bool equal(struct Student a, struct Student b) {
    return (a.roll_no == b.roll_no) && (a.marks == b.marks) && (strcmp(a.name, b.name) == 0);
}

void readStudent(struct Student* s) {
    printf("Name: ");
    getchar();
    fgets(s->name, sizeof(s->name), stdin);
    size_t len = strlen(s->name);
    if (len > 0 && s->name[len-1] == '\n') s->name[len-1] = '\0';
    printf("Roll: ");
    scanf("%d", &s->roll_no);
    printf("Marks: ");
    scanf("%f", &s->marks);
}

int main(void) {
    struct Student s1, s2;

    printf("Enter first student details\n");
    readStudent(&s1);

    printf("\nEnter second student details\n");
    readStudent(&s2);

    if (equal(s1, s2)) {
        printf("\nIdentical\n");
    } else {
        printf("\nNot identical\n");
    }

    return 0;
}
