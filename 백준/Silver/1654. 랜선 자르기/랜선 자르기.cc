#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    __uint64_t left, right, mid, ans; left=right=mid=ans=0;
    int32_t k,n; cin >> k >> n;
    vector<__uint64_t> v(k);
    for (int i=0;i<k;i++) {
        cin >> v[i];
        right = max(right,v[i]);
    }
    while (left<=right) {
        mid = (left+right+1)/2;
        int32_t cnt = 0;
        for (__uint64_t i : v) cnt += i/mid;
        if (cnt >= n) {ans = mid; left = mid + 1;} else right = mid-1;
    }
    cout << ans;
}