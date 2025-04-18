#include <iostream>
using namespace std;
int nCr[31][31];
int main() {
  for (int i=1;i<=30;i++) {
    nCr[i][i] = nCr[i][0] = 1;
    for (int j=1;j<i;j++) {
      nCr[i][j] = nCr[i-1][j-1] + nCr[i-1][j];
    }
  }
  int t; cin >> t;
  while (t--) {
    int r,n; cin >> r >> n;
    cout << nCr[n][r] << '\n';
  }
  return 0;
}