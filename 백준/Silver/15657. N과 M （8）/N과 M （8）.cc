#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> binding;
vector<int> ans;
vector<int> used(9, false);
void backtracking(int start, int max, int bound);
int main(void) {
    int n, m; cin >> n >> m;
    binding.resize(n+1);
    for (int i=1;i<=n;i++) cin >> binding[i];
    sort(binding.begin(), binding.end());
    backtracking(1, n,m);
    return 0;
}
void backtracking(int start, int max, int bound) {
    if (ans.size() == bound) {
        for (int i : ans) cout << binding[i] << " ";
        cout <<'\n';
        return;
    }
    for (int i=start;i<=max;i++) {
        ans.push_back(i);
        backtracking(i,max,bound);
        ans.pop_back();
    }
}