#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
    const unsigned long long MOD = 1000000000000;
    long long N=1, t; cin >> t;
    for(long long i=1;i<=t;i++) {
        N*=i;
        while(N%10==0) {
            N/=10;
        }
        N%=MOD;
    }
    printf("%05lld",N%100000);
    return 0;
}