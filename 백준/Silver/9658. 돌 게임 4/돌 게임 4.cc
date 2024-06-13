#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> dp;
    dp.push_back(0);
    dp.push_back(0);
    dp.push_back(1);
    dp.push_back(0);
    dp.push_back(1);
    dp.push_back(1);
    for(int i=6;i<=n;i++){
        if(dp[i-1]==1&&dp[i-3]==1&&dp[i-4]==1){
            dp.push_back(0);
        }else dp.push_back(1);
    }
    if (dp[n] == 1) cout << "SK\n";
    else cout << "CY\n";
    return 0;
}