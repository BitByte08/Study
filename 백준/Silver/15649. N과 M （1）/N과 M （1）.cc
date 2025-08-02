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
    static vector<int> used(n+1,0);
    static vector<int> ans(m,0);
    if (m == level) {
        for (auto i : ans) cout << i << " ";
        cout << '\n';
        return;
    }
    for (int i=0;i<n;i++) {
        if (!used[i]) {
            used[i] = 1;
            ans[level] = i+1;
            backtrack(level+1);
            used[i] = 0;
        }
    }
}