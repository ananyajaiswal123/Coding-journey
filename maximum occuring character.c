#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0}, i, max = 0;
    char ch;

    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
        if(count[str[i]] > max) {
            max = count[str[i]];
            ch = str[i];
        }
    }

    printf("Max occurring char: %c", ch);
    return 0;
}