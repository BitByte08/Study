#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int cnt = 0;
    int n; cin >> n;
    for(int i=2;i*i<=n;i++) {
        while(n%i==0) {
            n/=i;
            cnt++;
        }
    }
    if(n!=1) {
        cnt++;
    }
    if(log2(cnt)==(int)log2(cnt)) {
        cout << log2(cnt);
    }else {
        cout << (int)log2(cnt)+1;
    }
    return 0;
}