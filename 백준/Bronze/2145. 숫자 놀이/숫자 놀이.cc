#include <iostream>
using namespace std;
int adder(int n) {
  int sum = 0;
  while(n>0) {
    sum+=n%10;
    n/=10;
  }
  return sum;
}
int main(void) {
  while(true) {
    int n; cin >> n;
    if(!n) return 0;
    while(n>=10) {
      n = adder(n);
    }
    cout << n << '\n';
  }
}