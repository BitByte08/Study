#include <iostream>
#include <vector>
using namespace std;
vector<int> dp(10001);
int main() {
  int n,ans; cin >> n >> ans;
  vector<int> coin(n+1);
  for(int i=1;i<=n;i++) cin >> coin[i];
  for(int i=1;i<=ans;i++) dp[i] = 10001;
  for(auto i:coin) {
    for(int j=i;j<=ans;j++) dp[j] = min(dp[j],dp[j-i]+1);
  }
  cout << (dp[ans]==10001?-1:dp[ans]);
  return 0;
}