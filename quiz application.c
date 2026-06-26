#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("Q1: 2+2=?\n1)3 2)4 3)5\n");
    scanf("%d",&ans);
    if(ans == 2) score++;

    printf("Q2: Capital of India?\n1)Delhi 2)Mumbai\n");
    scanf("%d",&ans);
    if(ans == 1) score++;

    printf("Score = %d", score);
    return 0;
}