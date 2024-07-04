#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n==0){
            if(pq.empty()){
                cout << 0 << '\n';
                continue;
            }
            pair<int,int> a = pq.top();
            pq.pop();
            cout << a.first*a.second << '\n';
        }else{
            if(n<0){
                pq.push(make_pair(n*-1,-1));
            }else{
                pq.push(make_pair(n,1));
            }
        }
    }
    return 0;
}