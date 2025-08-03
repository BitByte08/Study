#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; cin >> n >> m;
    vector<int> v(n+1,0);
    for (int i=1;i<=n;i++) {
        cin >> v[i];
        v[i] += v[i-1];
    }
    for (int i=0;i<m;i++) {
        int a,b; cin >> a >> b;
        cout << v[b] - v[a-1] << '\n';
    }
    return 0;
}