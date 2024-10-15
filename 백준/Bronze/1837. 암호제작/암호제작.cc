#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

void prime(){
    for(int i = 2; i*i <= 1000000; i++){
        if(arr[i]) continue;
        for(int j = i + i; j <= 1000000; j+=i) arr[j] = 1;
    }
}

int main(){
    string s; int k; cin >> s >> k;
    prime();
    int res = 0x3f3f3f3f;
    for(int i=2;i<=k;i++){
        int ret = 0;
        if(arr[i]) continue;
        for(int j = 0; j < s.size(); j++)
            ret = (ret * 10 + s[j] - '0') % i;
        if(!ret) { res = i; break;}
    }
    if(res < k) cout << "BAD" << ' ' << res;
    else cout << "GOOD";
}