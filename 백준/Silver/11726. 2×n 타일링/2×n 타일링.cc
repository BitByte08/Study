#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n; cin >> n;
    vector<int> v = {1,1};
    for (int i = 2; i <= n; i++) v.push_back((v[i-1]+v[i-2])%10007);
    cout << v[n];
    return 0;
}