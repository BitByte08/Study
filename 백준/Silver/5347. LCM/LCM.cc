#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll gcd(ll a, ll b) {
    return b==0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a * b / gcd(max(a,b), min(a,b));
}
int main() {
    int n; cin >> n;
    for (int i=0;i<n;i++) {
        ll a, b; cin >> a >> b;
        cout << lcm(a, b) << endl;
    }
    return 0;
}