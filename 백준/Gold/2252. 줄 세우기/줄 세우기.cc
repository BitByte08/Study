#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> indegree;
vector<vector<int>> graph;
vector<int> toplogy_sort(int v) {
  vector<int> result;
  queue<int> q;
  for (int i=1;i<=v;i++) {
    if (indegree[i]==0) {
      q.push(i);
    }
  }
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    result.push_back(now);
    for (auto i : graph[now]) {
      indegree[i]--;
      if (indegree[i]==0) {
        q.push(i);
      }
    }
  }
  return result;
}
int main(void) {
  int v, e; cin >> v >> e;
  indegree.resize(v+1,0);
  graph.resize(v+1,vector<int>());
  for (int i=0;i<e;i++) {
    int a, b; cin >> a >> b;
    graph[a].push_back(b);
    indegree[b]++;
  }
  vector result = toplogy_sort(v);
  for (auto i : result) {
    cout << i << " ";
  }
  return 0;
}