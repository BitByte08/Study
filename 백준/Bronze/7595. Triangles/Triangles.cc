#include <iostream>
using namespace std;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  while (true) {
    int n; cin >> n;
    if (n==0) return 0;
    for (int i=0; i<n; i++) {
      for (int j=0; j<=i; j++) {
        cout << '*';
      }
      cout << endl;
    }
  }
}