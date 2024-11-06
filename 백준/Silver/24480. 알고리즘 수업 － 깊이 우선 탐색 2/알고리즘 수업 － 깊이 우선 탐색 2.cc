#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> v(100001,vector<int>(0));
vector<int> visited(100001,0);
int cnt=1;
void dfs(int n) {
  if (visited[n]) return;
  visited[n] = cnt++;
  sort(v[n].begin(),v[n].end(),greater<int>());
  for (auto i : v[n]) {
    dfs(i);
  }
}
int main() {
  int n,m,r; cin>>n>>m>>r;
  for (int i=0;i<m;i++) {
    int x,y; cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  dfs(r);
  for (int i=1;i<=n;i++) {
    cout<<visited[i]<<'\n';
  }
  return 0;
}