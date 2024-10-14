#include <bits/stdc++.h>
using namespace std;
int main(void){
    vector <int> v;
    while(1){    
        int n; cin >> n;
        if(!n) break;
        v.resize(n * 2);
        int cnt = 1;
        for(int i = 0; i < 2 * n; i++) cin >> v[i];
        for(int i = 0; i < n; i++) {
            int temp1 = v[i*2];
            int temp2 = v[i*2+1];
            cnt = cnt * temp1 - temp2;
        }
        cout << cnt << '\n';
    }
}