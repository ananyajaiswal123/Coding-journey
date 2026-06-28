#include <stdio.h>

int main() {
    int balance = 5000, amount;

    scanf("%d", &amount);

    if(amount <= balance)
        printf("Withdraw successful");
    else
        printf("Insufficient balance");

    return 0;
}