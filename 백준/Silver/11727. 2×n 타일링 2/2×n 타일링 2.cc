#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector<int> dp{0,1,3};
    int n; cin >> n;
    for(int i=3;i<=n;i++){
        dp.push_back((dp[i-1]+(dp[i-2]*2))%10007);
    }
    cout << dp[n];
    return 0;
}