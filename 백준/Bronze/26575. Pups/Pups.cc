#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    double a,b,c; cin >> a >> b >> c;
    double res = a * b * c;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << '$' << res << '\n';
  }
  return 0;
}