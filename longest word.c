#include <stdio.h>

int main() {
    char str[100], word[20], maxWord[20];
    int i=0, j=0, maxLen=0, len=0;

    gets(str);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
            len++;
        } else {
            word[j] = '\0';

            if(len > maxLen) {
                maxLen = len;
                strcpy(maxWord, word);
            }

            j = 0;
            len = 0;
        }

        if(str[i] == '\0') break;
        i++;
    }

    printf("Longest word: %s", maxWord);
    return 0;
}