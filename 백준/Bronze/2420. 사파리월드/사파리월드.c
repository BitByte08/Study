#include <stdio.h>
#include <stdlib.h>
int main(void){
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",llabs(a-b));
    return 0;
}