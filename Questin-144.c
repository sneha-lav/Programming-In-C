//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>
#include <string.h>

// Q144: Function that accepts a structure and prints its members

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("\nStudent Details\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll_no);
    printf("Marks : %.2f\n", s.marks);
}

int main(void) {
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    size_t len = strlen(s.name);
    if (len > 0 && s.name[len-1] == '\n') s.name[len-1] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printStudent(s); // pass structure by value

    return 0;
}
