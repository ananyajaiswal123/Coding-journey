#include <stdio.h>

int main() {
    char str[100];
    int i=0, j, flag=1;

    gets(str);

    while(str[i] != '\0') i++;

    for(j=0;j<i/2;j++){
        if(str[j] != str[i-j-1]){
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}