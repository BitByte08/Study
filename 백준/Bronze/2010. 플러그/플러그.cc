#include <iostream>
using namespace std;
int main() {
  int n, multi = 0; cin >> n;
  for (int i=0;i<n;i++) {
    int temp; cin >> temp;
    multi += temp;
  }
  cout << multi - n + 1;
  return 0;
}