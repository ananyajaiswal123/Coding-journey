#include <stdio.h>

int main() {
    int seats = 10, book;

    scanf("%d", &book);

    if(book <= seats) {
        seats -= book;
        printf("Booked");
    } else
        printf("Not enough seats");

    return 0;
}