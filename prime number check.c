#include<stdio.h>
int main(){
    printf("enter a number");
    scanf("%d",&n);
    if(n <= 1){
        printf("not print");
        return 0;
    }
    for(int i = 2;i <= n/2;i++){
        if(n % i==0){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    printf("prime");
    else
    print("noy prime");
    return 0;
}