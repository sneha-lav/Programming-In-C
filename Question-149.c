//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Q149: Dynamically allocate a structure and print details

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student *p = (struct Student*)malloc(sizeof(struct Student));
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter name: ");
    fgets(p->name, sizeof(p->name), stdin);
    size_t len = strlen(p->name);
    if (len > 0 && p->name[len-1] == '\n') p->name[len-1] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &p->roll_no);

    printf("Enter marks: ");
    scanf("%f", &p->marks);

    printf("\nStudent (Dynamic)\n");
    printf("Name  : %s\n", p->name);
    printf("Roll  : %d\n", p->roll_no);
    printf("Marks : %.2f\n", p->marks);

    free(p); // free the allocated memory
    return 0;
}
