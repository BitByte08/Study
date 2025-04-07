#include <iostream>
using namespace std;
int re(int n) {
  static int cnt = 0;
  if (n==1||n==2) {
    cnt++;
    return 1;
  }
  re(n-1);
  re(n-2);
  return cnt;
}
int main(void) {
  int n; cin >> n;
  cout << re(n) << " " << n-2;
  return 0;
}