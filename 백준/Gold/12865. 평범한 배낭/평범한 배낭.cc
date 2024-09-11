#include <iostream>
#include <vector>
using namespace std;
int dp[105][100005]={};
int main(void) {
  int n,k; cin >> n >> k;
  vector<pair<int,int>> v(n+1);
  for(int i=1;i<=n;i++) { cin >> v[i].first >> v[i].second; }
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=k;j++) {
      int a=v[i].first;
      int b=v[i].second;
      if(a<=j) {
        dp[i][j] = max(dp[i-1][j],b+dp[i-1][j-a]);
      }else {
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  cout << dp[n][k];
  return 0;
}