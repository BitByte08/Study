#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> v = {0,1,3};
    int n; cin >> n;
    for (int i=3;i<=n;i++) v.push_back((v[i-1]+v[i-2]*2)%10007);
    cout << v[n];
    return 0;
}