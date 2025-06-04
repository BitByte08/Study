#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  while (true) {
    int t; cin >> t;
    if (t==0) return 0;
    cout << t << " is" << (t%n?" NOT":"") << " a multiple of " << n << ".\n";
  }
}