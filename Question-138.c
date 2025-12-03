//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

long long powerLL(long long a, int b) { long long r = 1; for (int i = 0; i < b; i++) r *= a; return r; }
int digitsLL(long long x) { if (x == 0) return 1; int d = 0; if (x < 0) x = -x; while (x) { d++; x /= 10; } return d; }
int isArm(long long x) { if (x < 0) x = -x; int d = digitsLL(x); long long t = x, sum = 0; while (t) { int k = (int)(t % 10); sum += powerLL(k, d); t /= 10; } return sum == x; }

int main() {
    long long L, R;
    scanf("%lld%lld", &L, &R);

    int first = 1;
    for (long long v = L; v <= R; v++) {
        if (isArm(v)) {
            if (!first) printf(" ");
            printf("%lld", v);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
