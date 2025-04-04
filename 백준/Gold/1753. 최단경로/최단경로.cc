#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define INF ~(1<<31)
using namespace std;
vector<vector<pair<int,int>>> v(300001,vector<pair<int,int>>());
vector<int> dijkstra(300001,INF);
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n,m,start; cin >> n >> m >> start;

  for (int i=0;i<m;i++) {
    int x,y,c; cin >> x >> y >> c;
    v[x].push_back({y,c});
  }
  priority_queue<pair<int,int>> pq;
  pq.push({0,start});
  dijkstra[start] = 0;
  while (!pq.empty()) {
    int node = -pq.top().first;
    int cost = pq.top().second;
    pq.pop();
    for (auto i : v[cost]) {
      int nextNode = i.first;
      int nextCost = i.second + node;
      if (dijkstra[nextNode] > nextCost) {
        dijkstra[nextNode] = nextCost;
        pq.push({-nextCost,nextNode});
      }
    }
  }
  for (int i=1;i<=n;i++) {
    if (dijkstra[i]==INF) cout << "INF" << '\n';
    else cout << dijkstra[i] << '\n';
  }
  return 0;
}