#include <stdio.h>

int selfnumber(int n){
    int res = n;
    while(n>0){
        res+=n%10;
        n/=10;
    }
    return res;
}
int main(void){
    int arr[10001]={};
    int a=1,b=10000,i,result=0;
    for(i=0;i<b;i++){
        if(selfnumber(i) <10001){
            arr[selfnumber(i)]=1;
        }
    }
    for(i=a;i<=b;i++){
        if(arr[i]!=1){
            printf("%d\n",i);
        }
    }
    return 0;
}
