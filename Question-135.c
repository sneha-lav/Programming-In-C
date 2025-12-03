//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/

#include <stdio.h>

int main() {
    unsigned long long x;
    scanf("%llu", &x);

    int bits = 0;
    while (x) { if (x % 2) bits++; x /= 2; }

    printf("%d\n", bits);
    return 0;
}
