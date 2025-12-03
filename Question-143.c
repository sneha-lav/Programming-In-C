//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
#include <string.h>

// Q143: Find topper among students

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i+1);
        printf("Name: ");
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);
        size_t len = strlen(s[i].name);
        if (len > 0 && s[i].name[len-1] == '\n') s[i].name[len-1] = '\0';
        printf("Roll: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    int topperIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\nTopper\n");
    printf("Name: %s\n", s[topperIndex].name);
    printf("Roll: %d\n", s[topperIndex].roll_no);
    printf("Marks: %.2f\n", s[topperIndex].marks);
    
    return 0;
}
