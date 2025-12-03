//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int L = 0;
    while (s[L] && s[L] != '\n') L++;

    int i = L - 1;
    int first = 1;

    while (i >= 0) {
        while (i >= 0 && s[i] == ' ') i--;
        int end = i;
        while (i >= 0 && s[i] != ' ') i--;
        int start = i + 1;
        if (start <= end) {
            if (!first) putchar(' ');
            for (int k = start; k <= end; k++) putchar(s[k]);
            first = 0;
        }
    }

    putchar('\n');
    return 0;
}
