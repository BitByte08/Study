#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> v{-1,-1,-1,1,-1,1};
    int n; cin >> n;
    for (int i=6;i<=n;i++) {
        if (v[i-5]+1&&v[i-3]+1) {
            v.push_back(min(v[i-5]+1,v[i-3]+1));
        }else if (v[i-5]+1||v[i-3]+1) {
            v.push_back(max(v[i-5]+1,v[i-3]+1));
        }else {
            v.push_back(-1);
        }
    }
    cout << v[n];
    return 0;
}