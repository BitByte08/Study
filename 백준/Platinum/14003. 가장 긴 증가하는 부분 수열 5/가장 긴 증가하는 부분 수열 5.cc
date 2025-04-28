#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    vector<ll> dp;
    vector<int> pos(n);
    vector<int> parent(n, -1);
    vector<int> lis;
    for (int i = 0; i < n; ++i) {
        auto it = lower_bound(dp.begin(), dp.end(), arr[i]);
        int idx = it - dp.begin();

        if (it == dp.end()) {
            dp.push_back(arr[i]);
            lis.push_back(i);
        } else {
            *it = arr[i];
            lis[idx] = i;
        }
        pos[i] = idx;
        if (idx > 0) parent[i] = lis[idx-1];
    }
    cout << dp.size() << '\n';
    vector<int> ans;
    int idx = lis.back();
    while (idx != -1) {
        ans.push_back(arr[idx]);
        idx = parent[idx];
    }
    reverse(ans.begin(), ans.end());
    for (auto x : ans) cout << x << " ";
}