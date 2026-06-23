#include <stdio.h>

int main() {
    char a[100], b[100];
    int count1[26] = {0}, count2[26] = {0}, i;

    gets(a);
    gets(b);

    for(i = 0; a[i] != '\0'; i++)
        count1[a[i] - 'a']++;

    for(i = 0; b[i] != '\0'; i++)
        count2[b[i] - 'a']++;

    for(i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}