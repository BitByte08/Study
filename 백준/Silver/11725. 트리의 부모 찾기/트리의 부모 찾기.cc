#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector visited(0,-1);
vector<vector<int>> graph;
void bfs(int root) {
  queue<int> q;
  q.push(root);
  while(!q.empty()) {
    int cur = q.front();
    q.pop();
    for(int neighbour : graph[cur]) {
      if(visited[neighbour] == -1) {
        visited[neighbour] = cur;
        q.push(neighbour);
      }
    }
  }
}
int main(void) {
  const int root = 1;
  int n; cin >> n;
  visited.resize(n+1,-1);
  graph.resize(n+1,vector<int>());
  for(int i=0;i<n-1;i++) {
    int x,y; cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  for(int i=0;i<graph.size();i++) {
    sort(graph[i].begin(),graph[i].end());
  }
  bfs(root);
  for(int i=2;i<=n;i++) {
    cout << visited[i] << '\n';
  }
  return 0;
}