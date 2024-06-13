#include <iostream>
#include <string>
using namespace std;


int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  int n = s.length() / 3;
  
  cout << (s.substr(0, n) == s.substr(n, n) ? s.substr(0, n) : s.substr(2*n));
  return 0;
}