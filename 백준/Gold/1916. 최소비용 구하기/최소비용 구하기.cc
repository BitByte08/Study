#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define INF ~(1<<31)
using namespace std;
int main(void) {
  int n; cin >> n;
  vector<vector<pair<int,int>>> v(n+1,vector<pair<int,int>>());
  vector<int> dijkstra(n+1,INF);
  int m; cin >> m;
  for (int i=0;i<m;i++) {
    int x,y,c; cin >> x >> y >> c;
    v[x].push_back({y,c});
  }
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
  int start, end; cin >> start >> end;
  pq.push({start,0});
  dijkstra[start] = 0;
  while (!pq.empty()) {
    pair<int,int> cur = pq.top();
    pq.pop();
    int node = cur.first;
    int cost = cur.second;
    if (dijkstra[node] < cost) continue;
    for (auto i : v[node]) {
      int nextNode = i.first;
      int nextCost = i.second + cost;
      if (dijkstra[nextNode] > nextCost) {
        dijkstra[nextNode] = nextCost;
        pq.push({nextNode,nextCost});
      }
    }
  }
  cout << dijkstra[end];
  return 0;
}