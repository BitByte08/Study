#include <iostream>
#include <vector>
using namespace std;
void backtrack(int start, int level);
int n, m;
int main(void) {
    cin >> n >> m;
    backtrack(1,0);
}
void backtrack(int start, int level) {
    static vector<int> used(n+1, 0);
    static vector<int> ans(m, 0);
    if (level == m) {
        for (auto i : ans) cout << i << " ";
        cout << '\n';
        return;
    }
    for (int i = start; i <= n; i++) {
            ans[level] = i;
            backtrack(i, level + 1);
    }
}