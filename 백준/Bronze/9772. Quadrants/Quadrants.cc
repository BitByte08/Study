#include <iostream>
using namespace std;
inline bool fn1(string& s) {
  int idx = 0;
  const int len = s.length();
  if (s.front() == '+' || s.front() == '-') idx++;
  while (idx < len && s[idx] == '0') idx++;
  if (idx < len && s[idx] == '.') {
    idx++;
    while (idx < len && s[idx] == '0') idx++;
  }
  return idx == len;
}
int main() {
  string x, y; cin >> x >> y;
  while (!(fn1(x) && fn1(y))) {
    if (fn1(x) || fn1(y)) cout << "AXIS";
    else {
      if (x.front() == '-') {
        if (y.front() == '-') cout << "Q3";
        else cout << "Q2";
      }
      else {
        if (y.front() == '-') cout << "Q4";
        else cout << "Q1";
      }
    }
    cout << '\n';
    cin >> x >> y;
  }

  cout << "AXIS";
}