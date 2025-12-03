//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <string.h>

// Q147: Write and read employees in a binary file

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main(void) {
    int n;
    printf("How many employees? ");
    scanf("%d", &n);
    if (n <= 0 || n > 50) {
        printf("Using default n = 3\n");
        n = 3;
    }

    struct Employee arr[50];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i+1);
        printf("Name: ");
        getchar();
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        size_t len = strlen(arr[i].name);
        if (len > 0 && arr[i].name[len-1] == '\n') arr[i].name[len-1] = '\0';
        printf("ID: ");
        scanf("%d", &arr[i].id);
        printf("Salary: ");
        scanf("%f", &arr[i].salary);
    }

    // Write to binary file
    FILE *fp = fopen("employees.bin", "wb");
    if (!fp) {
        printf("Could not open file for writing!\n");
        return 0;
    }
    fwrite(arr, sizeof(struct Employee), n, fp);
    fclose(fp);

    // Read back
    fp = fopen("employees.bin", "rb");
    if (!fp) {
        printf("Could not open file for reading!\n");
        return 0;
    }

    struct Employee readArr[50];
    size_t readCount = fread(readArr, sizeof(struct Employee), n, fp);
    fclose(fp);

    printf("\nRead Back %zu Employee(s)\n", readCount);
    for (size_t i = 0; i < readCount; i++) {
        printf("%2zu) Name: %-20s ID: %4d Salary: %8.2f\n", i+1, readArr[i].name, readArr[i].id, readArr[i].salary);
    }

    return 0;
}
