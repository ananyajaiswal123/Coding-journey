#include <stdio.h>

int main() {
    int choice;

    printf("1.Issue Book 2.Return Book\n");
    scanf("%d", &choice);

    if(choice == 1)
        printf("Book Issued");
    else
        printf("Book Returned");

    return 0;
}