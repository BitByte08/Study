#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;
    scanf("%d",&n);
    long long int x[n];
    long long int i,j,cnt=0;
    for(i=0;i<n;i++){
        scanf("%lld",&x[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cnt+=abs(x[i]-x[j]);
        }
    }
    printf("%lld",cnt);
}