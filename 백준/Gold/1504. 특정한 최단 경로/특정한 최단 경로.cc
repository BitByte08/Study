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
  vector<pair<int, int>> graph[n+1];
  for (int i = 0; i < m; i++) {
    int x, y, z; cin >> x >> y >> z;
    graph[x].push_back({y, z});
    graph[y].push_back({x, z});
  }
  int v1,v2; cin >> v1 >> v2;
  vector v1_dist(2L,0);
  vector v2_dist(2L,0);
  long long int v1_v2;
  vector value = dijkstra(v1, n, graph);
  v1_dist[0]= value[1];v1_dist[1] = value[n];
  v1_v2 = value[v2];
  value = dijkstra(v2, n, graph);
  v2_dist[0] = value[1];v2_dist[1] = value[n];
  long long int ans = min(v1_dist[0] + v1_v2 + v2_dist[1], v2_dist[0] + v1_v2 + v1_dist[1]);
  if(ans>=INF) ans = -1;
  cout << ans;
  return 0;
}