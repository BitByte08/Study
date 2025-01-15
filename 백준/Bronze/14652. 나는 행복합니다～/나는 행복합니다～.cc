#include <iostream>
using namespace std;
int main(void) {
  int n,m,t; cin >> n >> m >> t;
  int cnt = 0;
  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      if (t==cnt) {
        cout << i << ' ' << j;
        return 0;
      }
      cnt++;
    }
  }
  return 0;
}