#include<stdio.h>
#include<math.h>
int main(){
    int start,end,i,temp,remainder,result,digits;
    printf("enter start and end:");
    scanf("%d %d",&start,&end);
    for(i = stat;i <= end;i++){
        temp = i;
        result = 0;
        digits = 0;
    while(temp != 0){
        temp /= 10;
        digits++;
    }
    temp = i;
    while(temp != 0){
        remainder - temp % 10;
        result += pow(remainder,digits);
        temp /= 10;
    }
    if(result == i){
        printf("%d",i);
    }
}
return 0;
}