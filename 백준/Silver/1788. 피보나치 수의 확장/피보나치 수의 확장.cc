#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    int n; cin >> n;
    vector<int> dp;
    dp.push_back(0);
    dp.push_back(1);
    if(n>0) {
        for(int i=2;i<=n;i++) {
            dp.push_back((dp[i-1]+dp[i-2])%1000000000);
        }
    }
    else if(n<0){
        n*=-1;
        for(int i=2;i<=n;i++) {
            dp.push_back((dp[i-2]-dp[i-1])%1000000000);
        }
    }else {
        cout << 0 << '\n' << 0;
        return 0;
    }
    cout << (dp.back()>0?"1\n":"-1\n");
    cout << abs(dp.back());
    return 0;
}