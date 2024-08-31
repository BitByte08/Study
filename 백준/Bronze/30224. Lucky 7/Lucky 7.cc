#include <iostream>
using namespace std;

int func1(int n) {
  while(n>0) {
    if (n%10==7) return 1;
    n/=10;
  }
  return 0;
}
int func2(int n) {return n % 7 == 0;}
int main(void) {
  int n; cin >> n;
  cout << 2 * func1(n) + func2(n);
  return 0;
}