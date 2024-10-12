#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, res = 1; cin >> n;
    for(int i=1;i<=n;res*=i,res%=10,i++);
    cout << res;
}