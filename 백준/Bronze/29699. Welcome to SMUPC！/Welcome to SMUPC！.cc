#include <iostream>
using namespace std;
int main() {
  string s = "WelcomeToSMUPC";
  int n; cin >> n;
  n--;
  n%=14;
  cout << s[n];
}