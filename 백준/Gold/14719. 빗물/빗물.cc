#include <iostream>
#include <vector>
using namespace std;
int main(void){
  int res = 0, h, w; cin >> h >> w;
  vector<int> v(w);
  for (int i=0;i<w;i++) cin >> v[i];
  for (int i=1;i<w-1;i++) {
    int l, r; l=r=0;
    for (int j=0;j<i;j++) l = max(l, v[j]);
    for (int j=i;j<w;j++) r = max(r, v[j]);
    res += max(0, min(l, r) - v[i]);
  }
  cout << res;
  return 0;
}