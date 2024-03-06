#include <stdio.h>
/*
첫째 줄에는 영수증에 적힌 총 금액 
$X$가 주어진다.

둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수 
$N$이 주어진다.

이후 
$N$개의 줄에는 각 물건의 가격 
$a$와 개수 
$b$가 공백을 사이에 두고 주어진다.
*/
int main(){
    int x,n,a,b,cnt=0,i;
    scanf("%d %d",&x,&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        cnt+= (a*b);
    }
    if(x == cnt){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}