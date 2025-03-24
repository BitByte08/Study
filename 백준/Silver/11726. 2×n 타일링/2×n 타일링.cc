#include <iostream>
#include <vector>
#define MOD 10007
using namespace std;
int main(void) {
    vector<int> v{0,1,2,3,5};
    int n; cin >> n;
    for (int i=5;i<=n;i++) {
        v.push_back((v[i-1]+v[i-2])%MOD);
    }
    cout << v[n] << endl;
    return 0;
}