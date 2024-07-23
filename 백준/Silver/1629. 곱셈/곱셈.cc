#include <complex>
#include <iostream>
#include <cstdio>

using namespace std;
long long A,B,C;
long long power(long long b) {
    if(b==0) return 1;
    if(b==1) return A%C;
    long long k = power(b/2)%C;
    if(b%2==0)return k*k%C;
    return k*k%C*A%C;
}
int main(void){
    cin >> A >> B >> C;
    cout << power(B);
    return 0;
}