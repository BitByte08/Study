#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  vector<int> wl = {0};
  vector<int> wr = {0};
  int n; cin >> n;
  vector<int> v(n+1);
  for (int i=1;i<=n;i++) cin >> v[i];
  for (int i=1;i<=n;i++) {
    wl.push_back(max(wl[i-1],v[i]));
    wr.push_back(max(wr[i-1],v[n-i+1]));
  }
  for (int i=1;i<=n;i++) {
    cout << wl[i] << " " << wr[n-i+1] << '\n';
  }
  return 0;
}