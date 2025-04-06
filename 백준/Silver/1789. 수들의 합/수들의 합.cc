#include <iostream>
using namespace std;
int main(void) {
  uint64_t n; cin >> n;
  uint64_t sum = 0,i=1;
  while (1) {
    sum += i;
    if (sum>n) {
      i--;
      break;
    }
    if (sum==n) break;
    i++;
  }
  cout << i;
  return 0;
}