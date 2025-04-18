#include <iostream>
#include <vector>
// v[I][j] = v[I][j-1] + v[I-1][j]
using namespace std;
int main() {
  vector<vector<int>> v(15, vector<int>(15,0));
  for (int i=1;i<15;i++) {
    v[i][1] = 1;
    v[0][i] = i;
  }
  for (int i=1;i<15;i++) {
    for (int j=2;j<15;j++) {
      v[i][j] = v[i-1][j] + v[i][j-1];
    }
  }
  int t; cin >> t;
  while (t--) {
    int k,n; cin >> k >> n;
    cout << v[k][n] << endl;
  }
  return 0;
}