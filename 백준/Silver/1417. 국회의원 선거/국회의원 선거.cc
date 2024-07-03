#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,da; cin >> t >> da;
    t--;
    if(!t){
        cout << 0;
        return 0;
    }
    priority_queue<int> pq;
    int res=0;
    for(int i=0;i<t;i++){
        int temp; cin >> temp;
        pq.push(temp);
    }
    while(pq.top()>=da){
        int temp = pq.top()-1;
        pq.pop();
        pq.push(temp);
        da++;
        res++;
    }
    cout << res;
    return 0;
}