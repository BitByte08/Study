#include <iostream>
using namespace std;
int main(void) {
    int n,k,res = 1; cin >> n >> k;
    for (int i=2;i<=n;i++) {
        res = (res+k-1)%i+1;
    }
    cout << res;
}