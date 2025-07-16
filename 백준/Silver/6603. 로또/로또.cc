#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> binding;
vector<int> ans;
vector<int> used(13, false);
set<vector<int>> ans_set;
void backtracking(int start, int max, int bound);
int main(void) {
    while (true) {
        int n; cin >> n;
        if (!n) return 0;
        binding.resize(n+1);
        for (int i=1;i<=n;i++) cin >> binding[i];
        backtracking(1, n,6);
        for (auto &i : ans_set) {
            for (auto j : i) {
                cout << j << " ";
            }
            cout << '\n';
        }
        ans_set.clear();
        cout << '\n';
    }
}
void backtracking(int start, int max, int bound) {
    if (ans.size() == bound) {
        vector<int> bind_res;
        for (int i=0;i<ans.size();i++) {
            //cout << "ans[i]: " << ans[i] << ", binding[ans[i]]: " << binding[ans[i]] << '\n';
            bind_res.push_back(binding[ans[i]]);
        }
        ans_set.insert(bind_res);
        return;
    }
    for (int i=start;i<=max;i++) {
        if (used[i]) continue;
        used[i] = true;
        ans.push_back(i);
        backtracking(i,max,bound);
        used[i] = false;
        ans.pop_back();
    }
}