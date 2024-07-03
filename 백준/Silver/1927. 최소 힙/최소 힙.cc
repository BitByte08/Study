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
        if(temp==0) {
            if(pq.empty()){
                cout << 0 << '\n';
                continue;
            }
            cout << pq.top() << '\n';
            pq.pop();
            continue;
        }
        pq.push(temp);
    }
    return 0;
}