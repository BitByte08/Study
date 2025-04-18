#include <iostream>
#include <vector>
using namespace std;
vector<int> v = {1,1};
int main() {
  for (int i=2;i<=40;i++) {
    v.push_back(v[i-1]+v[i-2]);
  }
  int n; cin >> n;
  cout << v[n];
}