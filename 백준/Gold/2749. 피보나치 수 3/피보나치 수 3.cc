#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<long long> dp;
    dp.push_back(0);
    dp.push_back(1);
    for(int i = 0;i<1500000;i++){
        dp.push_back((dp[i]+dp[i+1])%1000000);
    }
    cout << dp[n%1500000];
    return 0;
}
