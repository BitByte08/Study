#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; n=m=0;
    int a[3]; cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if(a[0]==a[1]&&a[1]==a[2]) n = 1;
    if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1]) m = 1;
    if(!n && !m) cout << 0;
    if(!n && m) cout << 1;
    if(n && !m) cout << 2;
}