#include <vector>
#include <queue>
#include <iostream>
using namespace std;
# define INF 99999999
vector<int> dijkstra(int start, int N, vector<pair<int, int> > graph[]) {
  vector<int> dist(N+1, INF);
  priority_queue<pair<int, int>> pq;
  dist[start] = 0;
  pq.push({0, start});
  while (!pq.empty()) {
    int cur_dist = -pq.top().first;
    int cur_node = pq.top().second;
    pq.pop();
    if(dist[cur_node] < cur_dist) {
      continue;
    }
    for (int i = 0; i < graph[cur_node].size(); i++) {
      int nxt_node = graph[cur_node][i].first;
      int nxt_dist = cur_dist + graph[cur_node][i].second;
      if (nxt_dist < dist[nxt_node]){
        dist[nxt_node] = nxt_dist;
        pq.push({-nxt_dist, nxt_node});
      }
    }
  }
  return dist;
}
int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n, m; cin >> n >> m;
  int start; cin >> start;
  vector<pair<int, int>> graph[n+1];
  for (int i = 0; i < m; i++) {
    int x, y, z; cin >> x >> y >> z;
    graph[x].push_back({y, z});
  }
  vector<int> dist = dijkstra(start, n, graph);
  for(int i=1;i<=n;i++) {
    if(dist[i]==INF) {
      cout << "INF\n";
    }else {
      cout << dist[i] << '\n';
    }
  }
  return 0;
}
