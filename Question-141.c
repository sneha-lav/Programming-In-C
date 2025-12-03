//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>
#include <string.h>

// Q141: Read and print one student's data

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

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

    printf("\nStudent Details\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll_no);
    printf("Marks : %.2f\n", s.marks);

    return 0;
}
