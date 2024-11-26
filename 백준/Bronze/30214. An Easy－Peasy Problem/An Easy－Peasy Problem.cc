#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
  double s1, s2; cin >> s1 >> s2;
  if (ceil(s2 / 2) <= s1) cout << "E";
  else cout << "H";
  return 0;
}