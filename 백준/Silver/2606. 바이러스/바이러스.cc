#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(void) {
    int n,m; cin >> n >> m;
    vector<vector<int>> v(n+1, vector<int>(0));
    for (int i=0;i<m;i++) {
        int a,b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int res = 0;
    vector<bool> visited(n+1, false);
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        int now = q.front(); q.pop();
        if (visited[now]) continue;
        res++;
        visited[now] = true;
        for (auto x : v[now]) q.push(x);
    }
    cout << res-1;
    return 0;
}