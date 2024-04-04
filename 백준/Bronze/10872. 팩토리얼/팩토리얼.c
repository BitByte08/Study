#include <stdio.h>

int f(long long int i){
    if(i<=1) return 1;
    else return f(i-1)*i;
}
int main(void){
    long long int n;
    scanf("%lld",&n);
    printf("%d",f(n));
    return 0;
}