//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>

int main() {
    unsigned long long x;
    scanf("%llu", &x);

    if (x == 0) { printf("False\n"); return 0; }
    while (x % 2 == 0) x /= 2;

    printf(x == 1 ? "True\n" : "False\n");
    return 0;
}
