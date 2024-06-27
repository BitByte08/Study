#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int n; cin >> n;
    vector<int> dp;
    dp.push_back(0);
    dp.push_back(1);
    dp.push_back(2);
    for(int i=3;i<=n;i++){
        dp.push_back((dp[i-1]+dp[i-2])%10007);
    }
    cout << dp[n];
    return 0;
}

