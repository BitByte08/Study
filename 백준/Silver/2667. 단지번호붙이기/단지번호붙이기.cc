#include <bits/stdc++.h>
#define X x+i.first
#define Y y+i.second
using namespace std;
vector<vector<int>> visited(25,vector<int>(25,0));
vector<vector<int>> v(25,vector<int>(25,0));
vector<pair<int,int>> d{{1,0},{-1,0},{0,1},{0,-1}};
int n;
int dfs(int x,int y) {
  int cnt=1;
  visited[x][y]=1;
  for(auto i:d) if(X<n && X>=0 && Y<n && Y>=0) if(!visited[X][Y] && v[X][Y]==1) cnt += dfs(X,Y);
  return cnt;
}

int main(void) {
  cin >> n;
  vector<int> res;
  for(int i=0;i<n;i++) {
    string s; cin >> s;
    for(int j=0;j<n;j++) v[i][j] = s[j]-'0';
  }
  int cnt = 0;
  for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(v[i][j]&&!visited[i][j])res.push_back(dfs(i,j));
  cout << res.size() << '\n';
  sort(res.begin(), res.end());
  for(auto i:res) cout << i << '\n';
  return 0;
}
