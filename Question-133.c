//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>

int main() {
    char s[200005], t[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    if (!fgets(t, sizeof(t), stdin)) return 0;

    int L = 0; while (s[L] && s[L] != '\n') L++; s[L] = '\0';
    int M = 0; while (t[M] && t[M] != '\n') M++; t[M] = '\0';

    int count = 0;
    for (int i = 0; i + M <= L; i++) {
        int ok = 1;
        for (int j = 0; j < M; j++) {
            if (s[i + j] != t[j]) { ok = 0; break; }
        }
        if (ok) count++;
    }

    printf("%d\n", count);
    return 0;
}
