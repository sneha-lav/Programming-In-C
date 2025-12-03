//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/

#include <stdio.h>

int main() {
    char s[200005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int freq[256] = {0};
    for (int i = 0; s[i] && s[i] != '\n'; i++) freq[(unsigned char)s[i]]++;

    for (int i = 0; i < 256; i++) while (freq[i]--) putchar(i);
    putchar('\n');
    return 0;
}
