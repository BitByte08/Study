#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;cin >> n;
    vector<int> arr(n);
    vector<int> dp;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) {
        int num = arr[i];
        auto temp = lower_bound(dp.begin(), dp.end(), num);
        if(temp == dp.end()) dp.push_back(num);
        else *temp = num;
    }

    cout << dp.size() << endl;
    return 0;
}