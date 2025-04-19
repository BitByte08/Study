#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  vector<int> dp = {-1, -1, 1, -1, 2, 1};
  int n; cin >> n;
  for (int i=6;i<=n;i++) {
    if ((dp[i-5]+1)&&(dp[i-2]+1)) dp.push_back(min(dp[i-5]+1, dp[i-2]+1));
    else if ((dp[i-5]+1)||(dp[i-2]+1)) dp.push_back(max(dp[i-5]+1, dp[i-2]+1));
    else dp.push_back(-1);
  }
  cout << dp[n];
  return 0;
}