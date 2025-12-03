//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);

    long long temp = a;
    a = b;
    b = temp;

    printf("%lld %lld\n", a, b);
    return 0;
}
