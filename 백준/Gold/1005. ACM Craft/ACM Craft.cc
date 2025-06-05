#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int N, M;
    cin >> N >> M;

    vector<int> cost(N + 1);
    vector<int> dp(N + 1);
    vector<int> indegree(N + 1, 0);
    vector<vector<int>> adj(N + 1);

    for (int i = 1; i <= N; ++i) {
      cin >> cost[i];
      dp[i] = cost[i];
    }

    for (int i = 0; i < M; ++i) {
      int from, to;
      cin >> from >> to;
      adj[from].push_back(to);
      indegree[to]++;
    }

    int target;
    cin >> target;

    queue<int> q;
    for (int i = 1; i <= N; ++i) {
      if (indegree[i] == 0) {
        q.push(i);
      }
    }

    while (!q.empty()) {
      int cur = q.front(); q.pop();

      for (int next : adj[cur]) {
        dp[next] = max(dp[next], dp[cur] + cost[next]); // 최댓값으로 갱신
        if (--indegree[next] == 0) {
          q.push(next);
        }
      }
    }

    cout << dp[target] << endl;
  }
  return 0;
}