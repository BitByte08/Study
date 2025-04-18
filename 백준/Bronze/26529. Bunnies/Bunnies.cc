#include <iostream>
using namespace std;
int dp[46]={1,1};
int main() {
  for (int i=2;i<=45;i++) dp[i] = dp[i-1]+dp[i-2];
  int t;cin >> t;
  while(t--) {
    int n; cin >> n;
    cout << dp[n] << '\n';
  }
}