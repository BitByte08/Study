#include <iostream>
#include <vector>
using namespace std;
vector<long> v = {0,1};
int main(void) {
  for (int i=2;i<=90;i++) v.push_back(v[i-1]+v[i-2]);
  int n; cin >> n;
  cout << v[n];
  return 0;
}