#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int main(void) {
    int n, m, v; cin >> n >> m >> v;
    vector<vector<int>> graph(n+1, vector<int>(0));
    for (int i=0;i<m;i++) {
        int a,b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int> visited(n+1, 0);
    vector<int> ans;
    stack<int> s;
    s.push(v);
    while (!s.empty()) {
        int now = s.top(); s.pop();
        if (visited[now]) continue;
        visited[now] = 1;
        ans.push_back(now);
        sort(graph[now].begin(), graph[now].end(), greater<int>());
        for (auto x : graph[now]) {
            if (!visited[x]) s.push(x);
        }
    }
    for (auto x : ans) cout << x << " ";
    cout << '\n';
    fill(visited.begin(), visited.end(), 0);
    ans.clear();
    queue<int> q;
    q.push(v);
    while (!q.empty()) {
        int now = q.front(); q.pop();
        if (visited[now]) continue;
        visited[now] = 1;
        ans.push_back(now);
        sort(graph[now].begin(), graph[now].end());
        for (auto x : graph[now]) {
            if (!visited[x]) q.push(x);
        }
    }
    for (auto x : ans) cout << x << " ";
    return 0;
}