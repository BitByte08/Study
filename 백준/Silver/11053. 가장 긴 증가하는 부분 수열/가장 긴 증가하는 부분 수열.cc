#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  vector<int> v,dp;
  int n; cin >> n;
  for(int i=0;i<n;i++) {
    int temp; cin >> temp;
    v.push_back(temp);
  }
  int res=0;
  dp.assign(n,1);
  for(int i=0;i<n;i++) {
    for(int j=0;j<i;j++) {
      if(v[i]>v[j]) {
        dp[i] = max(dp[i],dp[j]+1);
      }
    }
    res = max(res,dp[i]);
  }
  cout << res;
  return 0;
}