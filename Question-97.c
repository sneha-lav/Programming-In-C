//#include <stdio.h>

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (i == 0 || (str[i-1] == ' ' && str[i] != ' ')) {
            if (str[i] >= 'a' && str[i] <= 'z') str[i] -= ('a' - 'A');
            printf("%c.", str[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
