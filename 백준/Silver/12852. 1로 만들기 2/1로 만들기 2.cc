#include <iostream>
#include <vector>
#define MAX 1000000
using namespace std;
inline void multi(vector<int>& dp,int i,int n) {
  if(i%n==0){
    dp[i]=min(dp[i],dp[i/n]+1);
  }
}
int main(void){
  vector<int> dp(MAX,0);
  int n; cin >> n;
  for(int i=2;i<=n;i++){
    dp[i]=dp[i-1]+1;
    multi(dp,i,2);
    multi(dp,i,3);
  }
  cout << dp[n] << '\n';
  while(n!=0) {
    cout << n << ' ';
    if(dp[n]==dp[n-1]+1) {
      n--;
    }else if(n%2==0 && dp[n]==dp[n/2]+1) {
      n/=2;
    }else if(n%3==0 && dp[n]==dp[n/3]+1) {
      n/=3;
    }else if(n==1) {
      break;
    }
  }
  return 0;
}