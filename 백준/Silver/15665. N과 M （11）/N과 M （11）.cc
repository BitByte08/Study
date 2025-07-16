#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> binding;
vector<int> ans;
vector<int> used(9, false);
set<vector<int>> ans_set;
void backtracking(int start, int max, int bound);
int main(void) {
    int n, m; cin >> n >> m;
    binding.resize(n+1);
    for (int i=1;i<=n;i++) cin >> binding[i];
    sort(binding.begin(), binding.end());
    backtracking(1, n,m);
    for (auto &i : ans_set) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << '\n';
    }
    return 0;
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
    for (int i=1;i<=max;i++) {
        ans.push_back(i);
        backtracking(i+1,max,bound);
        ans.pop_back();
    }
}