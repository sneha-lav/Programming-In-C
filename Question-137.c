//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long stk[200000];
    int top = -1;

    for (int i = 0; i < n; i++) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            long long v;
            scanf("%lld", &v);
            stk[++top] = v;
        } else if (op == 2) {
            if (top >= 0) top--;
        } else if (op == 3) {
            if (top >= 0) printf("%lld\n", stk[top]);
            else printf("Empty\n");
        }
    }

    return 0;
}
