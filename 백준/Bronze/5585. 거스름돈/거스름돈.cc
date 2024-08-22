#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n; cin >> n;
  n=1000-n;
  vector<int> v{500,100,50,10,5,1};
  int res=0;
  for(auto i : v) {
    res += n/i;
    n%=i;
  }
  cout << res;
}