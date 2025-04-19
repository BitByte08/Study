#include <cstdint>
#include <iostream>
#define MOD 1000000
using namespace std;
int dp[1500000] = {0,1};
int main(void){
    for (int i=2;i<1500000;i++) dp[i]=(dp[i-1]+dp[i-2])%MOD;
    int64_t n; cin >> n;
    cout << dp[n%1500000];
    return 0;
}