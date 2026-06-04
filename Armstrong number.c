#include<stdio.h>
#include<math.h>
int main(){
    int n,original,remainder,result = 0,digits = 0;
    printf("enter a number:");
    scanf("%d",&n);
    original = n;
    while(n != 0){
        n /= 10;
        digits++;
    }
    n = original;
    while(n != 0){
        remainder = n % 10;
        result += pow(remainder,digits);
        n /= 10;
    }
    if(result == original)
    printf("armstrong number");
    else
    print("not armstrong");
    return 0;
}