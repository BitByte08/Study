#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(void) {
    vector<int> v;
    queue<int> q;
    int n,k; cin >> n >> k;
    for (int i=1;i<=n;i++) q.push(i);
    int cnt = 1;
    while (!q.empty()) {
        if (cnt == k){
            v.push_back(q.front());
            q.pop();
            cnt = 0;
        }else {
            q.push(q.front());
            q.pop();
        }
        cnt++;
    }
    cout << '<' << v.front();
    for (int i=1;i<v.size();i++) cout << ", " << v[i];
    cout << '>';
    return 0;
}