#include <iostream>
using namespace std;
int main(void) {
  uint64_t n; cin >> n;
  uint64_t t = 0;
  uint64_t sum = 0,role = n-sum;
  for (int i=1;i<=role;i++) {
    sum+=i;
    role=n-sum;
    t++;
  }
  cout << t;
  return 0;
}