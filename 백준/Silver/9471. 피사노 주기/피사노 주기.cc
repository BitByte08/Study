#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;cin >> t;
    while(t--) {
        long long t2,n,i=2,count=0;
        cin >> t2 >> n;
        vector<long long> dp;
        dp.push_back(0);
        dp.push_back(1);
        while(1) {
            dp.push_back((dp[i-1] + dp[i -2 ]) % n);
            count++;
            if(dp[i-1]==0&&dp[i]==1) break;
            i++;
        }
        cout << t2 << ' ' << count << '\n';
    }
    return 0;
}
