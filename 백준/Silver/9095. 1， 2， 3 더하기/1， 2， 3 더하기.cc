#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int t; cin >> t;
    while(t--){
        vector<int> dp={0,1,2,4,7};
        int n; cin >> n;
        for(int i=5;i<=n;i++){
            dp.push_back(dp[i-1]+dp[i-2]+dp[i-3]);
        }
        cout << dp[n] << '\n';
    }
    return 0;
}

