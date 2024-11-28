#include <iostream>
using namespace std;
int main(void) {
  int n; cin >> n;
  while (n--) {
    int year; cin >> year;
    int div = year % 100;
    year = (year+1)%div;
    if (year) cout << "Bye\n";
    else cout << "Good\n";
  }
  return 0;
}