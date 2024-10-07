#include <iostream>
using namespace std;
int main(void) {
  int i,a,b; cin >> a >> b;
  for(i=0;a!=b;i++) {
    a%=24;
    a++;
  }
  cout << i;
  return 0;
}