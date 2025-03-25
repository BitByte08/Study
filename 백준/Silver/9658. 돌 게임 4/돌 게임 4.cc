#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> dp{0,0,1,0,1};
    int n; cin >> n;
    for (int i=5;i<=n;i++) {
        dp.push_back(dp[i-1]+dp[i-3]+dp[i-4]!=3);
    }
    cout << (dp[n]?"SK":"CY");
    return 0;
}