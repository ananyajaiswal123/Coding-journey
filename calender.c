#include <stdio.h>

int main() {
    int a, b, ch;

    printf("1.Add 2.Subtract\n");
    scanf("%d",&ch);

    scanf("%d %d",&a,&b);

    if(ch==1)
        printf("%d",a+b);
    else
        printf("%d",a-b);

    return 0;
}