#include <bits/stdc++.h>
#define X x+i.first
#define Y y+i.second
using namespace std;
vector<vector<int>> visited(25,vector<int>(25,0));
vector<vector<int>> v(25,vector<int>(25,0));
vector<pair<int,int>> d{{1,0},{-1,0},{0,1},{0,-1}};
int n;
int cnt;
void dfs(int x,int y) {
  for(auto i:d) {
    if(X>=n || X<0 || Y>=n || Y<0) continue;
    if(!visited[X][Y] && v[X][Y]==1) {
      visited[X][Y]=1;
      cnt++;
      dfs(X,Y);
    }
  }
}

int main(void) {
  cin >> n;
  vector<int> res;
  for(int i=0;i<n;i++) {
    string s; cin >> s;
    for(int j=0;j<n;j++) v[i][j] = s[j]-'0';
  }
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(v[i][j]&&!visited[i][j]){
        visited[i][j] = 1;
        cnt=1;
        dfs(i,j);
        res.push_back(cnt);

      }
    }
  }
  cout << res.size() << '\n';
  sort(res.begin(), res.end());
  for(auto i:res) cout << i << '\n';
  return 0;
}
