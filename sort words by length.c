#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20], temp[20];
    int i, j;

    for(i=0;i<5;i++)
        gets(words[i]);

    for(i=0;i<5;i++) {
        for(j=i+1;j<5;j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    for(i=0;i<5;i++)
        puts(words[i]);

    return 0;
}