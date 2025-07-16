#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
vector<int> used(9, false);
void backtracking(int start, int max, int bound);
int main(void) {
    int n, m; cin >> n >> m;
    backtracking(1,n,m);
    return 0;
}
void backtracking(int start, int max, int bound) {
    if (ans.size() == bound) {
        for (int i : ans) cout << i << " ";
        cout <<'\n';
        return;
    }
    for (int i=start;i<=max;i++) {
        ans.push_back(i);
        backtracking(i+1,max,bound);
        ans.pop_back();
    }
}