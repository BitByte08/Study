#include <stdio.h>

int main(void){
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    if(n>=m){
        printf("0");
        return 0;
    }else{
        long long int res = 1;
        for(int i=1;i<=n;i++){
            res=(res*i)%m;
        }
        printf("%lld",res);
    }
    return 0;
}