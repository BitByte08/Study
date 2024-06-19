#include <iostream>
#include <algorithm>
#define MAX 10000000
using namespace std;

int main(void){
    int dp[MAX]={};
    int n;
    cin >> n;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+1;
        if(i%2==0){
            dp[i]=min(dp[i],dp[i/2]+1);
        }
        if(i%3==0){
            dp[i]=min(dp[i],dp[i/3]+1);
        }
    }
    cout << dp[n];
    return 0;
}