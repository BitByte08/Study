#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> binding;
vector<int> ans;
vector<int> used(9, false);
void backtracking( int max, int bound);
int main(void) {
    int n, m; cin >> n >> m;
    binding.resize(n+1);
    for (int i=1;i<=n;i++) cin >> binding[i];
    sort(binding.begin(), binding.end());
    backtracking(n,m);
    return 0;
}
void backtracking(int max, int bound) {
    if (ans.size() == bound) {
        for (int i : ans) cout << binding[i] << " ";
        cout <<'\n';
        return;
    }
    for (int i=1;i<=max;i++) {
        if (used[i]) continue;
        used[i] = true;
        ans.push_back(i);
        backtracking(max,bound);
        used[i] = false;
        ans.pop_back();
    }
}