#include <iostream>
#include <vector>
using namespace std;
void backtrack(int level);
int n, m;
int main(void) {
    cin >> n >> m;
    backtrack(0);
}
void backtrack(int level) {
    static vector<int> ans(m, 0);
    if (level == m) {
        for (auto i : ans) cout << i << " ";
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
            ans[level] = i;
            backtrack(level + 1);
    }
}