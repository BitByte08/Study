#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <functional>
#define MAX 1000001

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        priority_queue<pair<int,int>> pq;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq2;
        vector<int> check(MAX);
        int t2; cin >> t2;
        for(int i=0;i<t2;i++){
            string s;
            int n;
            cin >> s >> n;
            if(s=="I"){
                pq.push(make_pair(n,i));
                pq2.push(make_pair(n,i));
                check[i]++;
            }else if(s=="D"){
                if(n==-1){
                    while(!pq2.empty()){
                        if(check[pq2.top().second]==1) break;
                        pq2.pop();
                    }
                    if(pq2.size()>0){
                        check[pq2.top().second]=0;
                    }
                }else{
                    while(!pq.empty()){
                        if(check[pq.top().second]==1) break;
                        pq.pop();
                    }
                    if(pq.size()>0){
                        check[pq.top().second]=0;
                    }
                }
            }
        }
        while(!pq2.empty()){
            if(check[pq2.top().second]==1) break;
            pq2.pop();
        }
        while(!pq.empty()){
            if(check[pq.top().second]==1) break;
            pq.pop();
        }
        if (pq.empty() && pq2.empty()) cout << "EMPTY\n";
        else cout << pq.top().first << ' ' << pq2.top().first << '\n';
    }
    return 0;
}