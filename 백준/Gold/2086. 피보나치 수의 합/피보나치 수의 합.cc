#include <iostream>
#include <queue>
#include <cmath>
#define MOD 1000000000
using namespace std;

void multi(long long a[],long long b[]) {
    long long a0=(a[0]*b[0]+a[1]*b[2])%MOD;
    long long a1=(a[0]*b[1]+a[1]*b[3])%MOD;
    long long a2=(a[2]*b[0]+a[3]*b[2])%MOD;
    long long a3=(a[2]*b[1]+a[3]*b[3])%MOD;
    a[0]=a0;
    a[1]=a1;
    a[2]=a2;
    a[3]=a3;
}
long long add(long long num) {
    long long p[4] = {1,1,1,0}, c[4]={1,0,0,1};
    while(num>0) {
        if(num%2==1) {
            multi(c,p);
        }
        multi(p,p);
        num/=2;
    }
    return (c[2]*2+c[3]+MOD-1)%MOD;
}
int main(void) {
    long long a,b; cin >> a >> b;
    cout << (add(b)-add(a-1)+MOD)%MOD;
    return 0;
}