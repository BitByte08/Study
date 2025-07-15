#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
vector<int> used;
void backtracking(int start, int max, int bound);
int main(void) {
    int n, m; cin >> n >> m;
    used.resize(n+1, false);
    backtracking(1, n, m);
}
void backtracking(int start, int max, int bound) {
    if (ans.size() == bound) {
        for (int i : ans) cout << i << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= max; i++) {
        if (used[i]) continue;
        used[i] = true;
        ans.push_back(i);
        backtracking(i, max, bound);
        ans.pop_back();
        used[i] = false;
    }
}