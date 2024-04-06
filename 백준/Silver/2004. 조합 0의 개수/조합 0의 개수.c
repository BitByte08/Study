#include <stdio.h>
long int five(long int n){
    long int cnt=0;
    while(5<=n){
        cnt+=n/5;
        n/=5;

    }
    return cnt;
}
long int two(long int n){

    long int cnt=0;
    while(2<=n){
        cnt+=n/2;
        n/=2;

    }
    return cnt;
}
int main(void) {
    long int n,m;
    scanf("%ld %ld",&n,&m);

    long int f = five(n) - five(m) - five(n-m);
    long int t = two(n) - two(m) - two(n-m);
    printf("%ld",f>t?t:f);
    return 0;
}
