#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<vector<int>> graph;
vector<int> visited;
vector<int> result;
void bfs(int r) {
  int cnt=1;
  queue<int> q;
  q.push(r);
  visited[r] = 1;
  result[r]=cnt;
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    for (int v : graph[cur]) {
      if (!visited[v]) {
        cnt++;
        q.push(v);
        result[v] = cnt;
        visited[v] = 1;
      }
    }
  }
}
int main() {
  int n,m,start; cin >> n >> m >> start;
  graph.resize(n+1);
  visited.resize(n+1);
  result.resize(n+1);
  for(int i=0;i<m;i++) {
    int x,y; cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  for(int i=1;i<=n;i++) {
    sort(graph[i].begin(),graph[i].end());
  }
  bfs(start);
  for(int i=1;i<=n;i++) {
    cout << result[i] << '\n';
  }
  return 0;
}