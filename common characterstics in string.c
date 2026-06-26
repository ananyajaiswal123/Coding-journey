#include <stdio.h>

int main() {
    char a[100], b[100];
    int i, j;

    gets(a);
    gets(b);

    printf("Common: ");
    for(i = 0; a[i] != '\0'; i++) {
        for(j = 0; b[j] != '\0'; j++) {
            if(a[i] == b[j]) {
                printf("%c ", a[i]);
                break;
            }
        }
    }

    return 0;
}