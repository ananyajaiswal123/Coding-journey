#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;

    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return (rev == temp);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}