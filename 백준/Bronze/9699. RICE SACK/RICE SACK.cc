#include <bits/stdc++.h>
using namespace std;
int main(void){
    int t; cin >> t;
    for(int i=1;i<=t;i++){
        int res = 0;
        for(int i = 0, x; i < 5; i++) {cin >> x; res = max(res, x);}
        cout << "Case #" << i << ": " << res << '\n';
    }
}