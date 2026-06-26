#include <stdio.h>

int main() {
    int balance = 1000, choice, amount;

    while(1) {
        printf("\n1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit\n");
        scanf("%d", &choice);

        if(choice == 1)
            printf("Balance = %d", balance);

        else if(choice == 2) {
            scanf("%d", &amount);
            balance += amount;
        }

        else if(choice == 3) {
            scanf("%d", &amount);
            if(amount <= balance)
                balance -= amount;
            else
                printf("Insufficient balance");
        }

        else break;
    }
    return 0;
}