#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(void) {
  for (int t=1;t<=100;t++) {
    int n; cin >> n;
    if (!n) break;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout.precision(1);
    cout << fixed;
    cout << "Case " << t << ": ";
    if (n % 2 == 0) cout << (double)(v[(n / 2) - 1] + v[n / 2]) / 2 << "\n";
    else cout << (double)v[n / 2] << "\n";
  }
  return 0;
}