#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
int main(void) {
    int n, m; cin >> n >> m;
    int start; cin >> start;
    vector<vector<int>> v(n+1);
    for (int i=0;i<m;i++) {
        int a,b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> visited1(n+1, false);
    stack<int> s;
    vector<int> ans1;
    s.push(start);
    while (!s.empty()) {
        int now = s.top(); s.pop();
        if (!visited1[now]) {
            visited1[now] = true;
            ans1.push_back(now);
            sort(v[now].begin(), v[now].end(), greater<int>());
            for (auto i : v[now]) {
                if (!visited1[i]) s.push(i);
            }
        }
    }
    for (auto x : ans1) cout << x << " ";
    cout << '\n';
    vector<int> visited2(n+1,false);
    queue<int> q;
    vector<int> ans2;
    q.push(start);
    while (!q.empty()) {
        int now = q.front(); q.pop();
        if (!visited2[now]) {
            visited2[now] = true;
            ans2.push_back(now);
            sort(v[now].begin(), v[now].end());
            for (auto i : v[now]) {
                if (!visited2[i]) q.push(i);
            }
        }
    }
    for (auto x : ans2) cout << x << " ";
    return 0;
}