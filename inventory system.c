#include <stdio.h>

int main() {
    int stock = 100, sell;

    scanf("%d", &sell);

    if(sell <= stock) {
        stock -= sell;
        printf("Remaining = %d", stock);
    } else
        printf("Out of stock");

    return 0;
}