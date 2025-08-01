#include <iostream>
#include <vector>
using namespace std;
vector<int32_t> dp(1000000, 0);
int main(void) {
    dp[0] = dp[1] = 0;
    int n; cin >> n;
    for (int i=2;i<=n;i++) {
        dp[i] = dp[i-1] + 1;
        if (!(i%3)) dp[i] = (min(dp[i],dp[i/3]+1));
        if (!(i%2)) dp[i] = (min(dp[i], dp[i/2]+1));
    }
    cout<<dp[n];
    return 0;
}
