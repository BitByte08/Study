#include <iostream>

using namespace std;

int main(void){
    int dp[46]={};
    dp[0]=0;
    dp[1]=1;
    int n,i;
    cin >> n;
    for(i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout << dp[n];
    return 0;
}