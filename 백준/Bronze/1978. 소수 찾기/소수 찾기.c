#include <stdio.h>

int prime(int n){
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(void){
    int t,n,cnt=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(prime(n)) cnt++;
    }
    printf("%d",cnt);
    return 0;
}