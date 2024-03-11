#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
    long long int i,n,a=1,b=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        if(b<=n&&a>=n){
            printf("%lld",i);
            break;
        }
        b=a+1;
        a+=6*i;
    }
    return 0;
}
