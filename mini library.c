#include <stdio.h>

int main() {
    int books = 5, issue;

    scanf("%d",&issue);

    books -= issue;
    printf("Books left=%d",books);

    return 0;
}