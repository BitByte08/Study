#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

vector<vector<int>> v(1001,vector<int>(0));
int n, s;

vector<int> dfs();
vector<int> bfs();

int main() {
    int t; cin >> n >> t >> s;
    for (int i=0;i<t;i++) {
        int a,b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (auto i : dfs()) cout << i << ' ';
    cout << endl;
    for (auto i : bfs()) cout << i << ' ';
}

vector<int> dfs() {
    vector<int> ans;
    vector<int> visited(1001,0);
    stack<int> st;
    st.push(s);
    while (!st.empty()) {
        int cur = st.top(); st.pop();
        if (!visited[cur]) {
            visited[cur] = 1;
            ans.push_back(cur);
            sort(v[cur].begin(), v[cur].end(), greater<int>());
            for (auto i : v[cur]) if (!visited[i]) st.push(i);
        }
    }
    return ans;
}
vector<int> bfs() {
    vector<int> ans;
    vector<int> visited(1001,0);
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        if (!visited[cur]) {
            visited[cur] = 1;
            ans.push_back(cur);
            sort(v[cur].begin(), v[cur].end());
            for (auto i : v[cur]) if (!visited[i]) q.push(i);
        }
    }
    return ans;
}