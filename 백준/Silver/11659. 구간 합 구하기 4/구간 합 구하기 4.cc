#include <iostream>
#include <vector>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  vector<int> v;
  int n,t; cin >> n >> t;
  int temp; cin >> temp; v.push_back(temp);
  for (int i = 1; i < n; i++) {
    cin >> temp; v.push_back(v[i-1] + temp);
  }
  while (t--) {
    int a,b; cin >> a >> b;
    cout << v[b-1] - v[a-2] << '\n';
  }
  return 0;
}