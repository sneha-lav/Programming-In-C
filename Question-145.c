//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
#include <string.h>

// Q145: Return a structure containing top student's details

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopper(struct Student arr[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[idx].marks) {
            idx = i;
        }
    }
    return arr[idx]; // returns a copy (simple and beginner-friendly)
}

int main(void) {
    int n;
    printf("How many students? ");
    scanf("%d", &n);
    if (n <= 0 || n > 50) {
        printf("Using default n = 5\n");
        n = 5;
    }

    struct Student arr[50];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i+1);
        printf("Name: ");
        getchar();
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        size_t len = strlen(arr[i].name);
        if (len > 0 && arr[i].name[len-1] == '\n') arr[i].name[len-1] = '\0';
        printf("Roll: ");
        scanf("%d", &arr[i].roll_no);
        printf("Marks: ");
        scanf("%f", &arr[i].marks);
    }

    struct Student topper = getTopper(arr, n);

    printf("\nTopper Details\n");
    printf("Name  : %s\n", topper.name);
    printf("Roll  : %d\n", topper.roll_no);
    printf("Marks : %.2f\n", topper.marks);

    return 0;
}
