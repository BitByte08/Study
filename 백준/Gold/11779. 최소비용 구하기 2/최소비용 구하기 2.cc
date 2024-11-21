#include <vector>
#include <queue>
#include <iostream>
using namespace std;
# define INF 99999999
int ans_temp[1001];
vector<int> dijkstra(int start, int N, vector<pair<int, int> > graph[]) {
  vector<int> dist(1001, INF);
  priority_queue<pair<int, int>> pq;
  dist[start] = 0;
  pq.push({0, start});
  while (!pq.empty()) {
    int cur_dist = -pq.top().first;
    int cur_node = pq.top().second;
    pq.pop();
    if(dist[cur_node] < cur_dist) continue;
    for (int i = 0; i < graph[cur_node].size(); i++) {
      int nxt_node = graph[cur_node][i].first;
      int nxt_dist = cur_dist + graph[cur_node][i].second;
      if (nxt_dist < dist[nxt_node]){
        ans_temp[nxt_node] = cur_node;
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
  vector<pair<int, int>> graph[1001];
  for (int i = 0; i < m; i++) {
    int x, y, z; cin >> x >> y >> z;
    graph[x].push_back({y, z});
  }
  int start,end; cin >> start >> end;
  vector<int> dist = dijkstra(start, n, graph);
  vector<int> ans;
  cout << dist[end] << '\n';
  int temp=end; while(temp) {
    ans.push_back(temp);
    temp = ans_temp[temp];
  }
  cout << ans.size() << '\n';
  for(int i=ans.size()-1; i>=0; i--) {
    cout << ans[i] << ' ';
  }
  return 0;
}
