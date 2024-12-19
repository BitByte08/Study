#include <iostream>
using namespace std;
int main(void) {
  int n; cin >> n;
  int a,b; cin >> a >> b;
  a/=2;
  a+=b;
  cout << (a>n?n:a);
  return 0;
}