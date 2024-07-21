#include <iostream>
#include <queue>
#include <cmath>
#define MOD 1000000007
using namespace std;
long long A[2][2]={0,1,1,1};
void multi(long long a[2][2],long long b[2][2]) {
    int tmp[2][2]={};
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            for(int k=0;k<2;k++) {
                tmp[i][j]+=(a[i][k]*b[k][j])%MOD;
            }
        }
    }
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            a[i][j]=tmp[i][j]%MOD;
        }
    }
}
int main(void) {
    long long ans[2][2]={1,0,0,1};
    long long n; cin >> n;
    n+=(n%2?1:0);
    while(n>0) {
        if(n%2==1) multi(ans,A);
        multi(A,A);
        n/=2;
    }
    cout << ans[1][0];
    return 0;
}