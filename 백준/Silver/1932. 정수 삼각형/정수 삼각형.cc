#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int n; cin >> n;
  vector<vector<int>> v(501,vector<int>(501,0));
  for(int i=0;i<n;i++) {
    for(int j=n-i-1;j<n;j++) {
      cin >> v[i][j];
    }
  }
  for(int i=1;i<n;i++) {
    for(int j=n-i-1;j<n;j++) {
      v[i][j] += max(v[i-1][j],v[i-1][j+1]);
    }
  }
  int res=0;
  for(auto i:v[n-1]) res = max(i,res);
  cout << res;
  return 0;
}