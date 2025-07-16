#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int res = 0, s;
void backtracking(int i, int sum, bool selected);
int main(void) {
    int n; cin >> n >> s;
    v.resize(n); for (int i=0;i<n;i++) cin >> v[i];
    backtracking(0, 0, false);
    cout << res;
    return 0;
}
void backtracking(int i, int sum, bool selected) {
    if (i == v.size()) {
        if ((sum == s)&&selected) res++;
        return;
    }
    backtracking(i+1, sum + v[i], true);
    backtracking(i+1, sum, selected);
}