#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,h,m; cin >> d >> h >> m;
    int t = 16511;
    int res = m + h * 60 + d * 60 * 24 - t;
    if(res < 0 )cout << -1;
    else cout << res;
}