#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int m = n;
        while(n != 1){
            int temp;
            if(n%2) temp = n*3 + 1;
            else temp = n/2;
            n = temp;
            m = max(m,temp);
        }
        cout << m << '\n';
    }

}