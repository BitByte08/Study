//윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.

#include <stdio.h>

int main(){
    int a,b=0,c=0;
    scanf("%d",&a);
    if(a%4==0){
        b=1;
    }
    if(a%100!=0||a%400==0){
        c=1;
    }
    if(b==c&&b==1){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}