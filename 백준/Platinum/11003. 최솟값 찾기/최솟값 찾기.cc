#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n; cin >> t >> n;
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater < pair<int, int>>> pq;
    for(int i=0;i<t;i++){
        int temp; cin >> temp;
        pq.push(make_pair(temp,i));
        while(pq.top().second<i-n+1){
            pq.pop();
        }
        cout << pq.top().first << ' ';
    }
    return 0;
}