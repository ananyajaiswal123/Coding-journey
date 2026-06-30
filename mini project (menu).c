#include <stdio.h>

int main() {
    int ch, a, b;

    while(1) {
        printf("\n1.Add 2.Exit\n");
        scanf("%d",&ch);

        if(ch==1) {
            scanf("%d %d",&a,&b);
            printf("Sum=%d",a+b);
        } else break;
    }

    return 0;
}