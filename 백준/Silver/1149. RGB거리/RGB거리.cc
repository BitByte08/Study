#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
  int n; cin >> n;
  vector<vector<int>> v;
  v.push_back(vector<int>{0,0,0});
  vector<vector<int>> dp;
  for(int i=0;i<n;i++) {
    vector<int> v2;
    for(int j=0;j<3;j++) {
      int temp; cin >> temp;
      v2.push_back(temp);
    }
    v.push_back(v2);
  }
  dp.push_back(vector<int>{0,0,0});
  for(int i=1;i<=n;i++) {
    vector<int> v2;
    v2.push_back(min(dp[i-1][1],dp[i-1][2])+v[i][0]);
    v2.push_back(min(dp[i-1][0],dp[i-1][2])+v[i][1]);
    v2.push_back(min(dp[i-1][0],dp[i-1][1])+v[i][2]);
    dp.push_back(v2);
  }
  cout << min(min(dp[n][1],dp[n][2]),dp[n][0]);
  return 0;
}