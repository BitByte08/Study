#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main(void){
    int t; cin >> t;
    vector<pair<int, int>> v;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<t;i++){
        int a,b,c; cin >> a >> b >> c;
        v.push_back({b, c});
    }
    int res = 0;
    sort(v.begin(), v.end());
    for(pair<int, int> p : v){
        while(!pq.empty() && pq.top() <= p.first) pq.pop();
        pq.push(p.second);
        res = max(res, (int)pq.size());
    }
    cout << res;
    return 0;
}