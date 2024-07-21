#include <iostream>
#define MOD 1000000007
using namespace std;

long long A[2][2]={1,1,1,0};
long long B[2][2]={1,0,0,1};
void multi(long long a[2][2],long long b[2][2]) {
    long long tmp[2][2]={};
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
    long long n; cin >> n;
    while(n>0) {
        if(n%2==1) {
            multi(B,A);
        }
        multi(A,A);
        n/=2;
    }
    cout << B[1][0]%MOD;
}