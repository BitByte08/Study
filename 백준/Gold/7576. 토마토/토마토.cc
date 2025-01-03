#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector v(1001,vector(1001,0));
queue<pair<int,int>> q;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int n, m, t;
bool isInside(int ny, int nx){
  return (0 <= ny && ny < n && 0 <= nx && nx < m);
}
void bfs(void) {
  while (!q.empty()) {
    int y = q.front().first;
    int x = q.front().second;
    q.pop();
    for (int i=0;i<4;i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (isInside(ny,nx) && v[ny][nx]==0) {
        v[ny][nx] = v[y][x]+1;
        q.push({ny, nx});
      }
    }
  }
}
int main(void) {
  int res = 0;
  cin >> m >> n;
  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      cin >> v[i][j];
      if (v[i][j]==1) {
        q.push({i, j});
      }
    }
  }
  bfs();
  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      if (v[i][j]==0) {
        cout << -1;
        return 0;
      }
      res = max(res, v[i][j]);
    }
  }
  cout << res-1;
  return 0;
}