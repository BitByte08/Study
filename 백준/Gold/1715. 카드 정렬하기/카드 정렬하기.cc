#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int,vector<int>,greater<int>> pq;
    int t; cin >> t;
    while(t--){
        int temp; cin >> temp;
        pq.push(temp);
    }
    int res = 0;
    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        a+=pq.top();
        pq.pop();
        pq.push(a);
        res+=a;
    }
    cout << res;
    return 0;
}