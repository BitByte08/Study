#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
    return a.first > b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    vector<pair<int,int>> v;
    
    for(int i=0;i<t;i++){
        int a,b; cin >> a >> b;
        v.push_back(make_pair(a-1,b));
    }
    
    long long res=0;
    sort(v.begin(),v.end(),comp);
    
    priority_queue<int> pq;
    for(int i=t-1,j=0;i>=0;i--){
        while(j<t&&i==v[j].first){
            pq.push(v[j].second);
            j++;
        }
        if(!pq.empty()){
            res+=pq.top();
            pq.pop();
        }
    }
    
    cout << res;
    return 0;
}