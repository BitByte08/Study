#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>
#define MOD 1000000007
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        int n; cin >> n;
        for(int i=0;i<n;i++){
            long long temp; cin >> temp;
            pq.push(temp);
        }
        long long res=1;
        while(pq.size()>=2){
            long long a = pq.top(); pq.pop();
            long long b = pq.top(); pq.pop();
            res*=(((a%MOD)*(b%MOD))%MOD);
            pq.push(a*b);
            res%=MOD;
        }
        cout << res << '\n';
    }
    return 0;
}