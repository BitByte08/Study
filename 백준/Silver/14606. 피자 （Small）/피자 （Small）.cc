#include <iostream>
using namespace std;
int res;
void enjoy(int n) {
  if (n<=1) return;
  res += ((n+1)/2)*(n/2);
  enjoy((n+1)/2);
  enjoy((n)/2);
  return;
}

int main(void) {
  int n; cin >> n;
  enjoy(n);
  cout << res;
  return 0;
}