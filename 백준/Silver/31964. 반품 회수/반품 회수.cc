#include <iostream>
#include <vector>
using namespace std;

int arr[100000001] = {};
int main(void) {
  int n; cin >> n;
  vector<int> v;
  for (int i=0;i<n;i++) {
    int t; cin >> t;
    v.push_back(t);
  }
  for (auto i : v) {
    int t; cin >> t;
    arr[i] = t;
  }
  int res = v.back();
  if (res > arr[res]) res -= 1;
  for (int i=v.back();i>=0;i--) {
    res += max(arr[i] - res, 1);
  }
  cout << res;
  return 0;
}