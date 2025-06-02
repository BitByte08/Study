#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    int cnt = 1;
    for (int i=0;i<n-1;i++) {
        if (v[i]<=v[i+1]) cnt++;
    }
    cout << cnt;
}