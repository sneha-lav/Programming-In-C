//Q91: Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[1000], result[1000];
    fgets(str, sizeof(str), stdin);
    int j = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
            ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U') {
            result[j++] = ch;
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}
