#include <stdio.h>
long long int f[1000000]={};
long long int fib(int n) {
        f[1]=f[2]=1;
        for(int i=3;i<=n;i++){
            f[i]=f[i-1]+f[i-2];
            f[i]%=1000000007;
        }
        return f[n];
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%lld", fib(n));
    return 0;
}