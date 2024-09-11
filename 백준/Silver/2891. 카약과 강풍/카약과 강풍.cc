#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n,s,r; cin >> n >> s >> r;
  vector<int> v(n+1,1);
  for(int i=0;i<s;i++) {
    int temp; cin >> temp;
    v[temp]--;
  }
  for(int i=0;i<r;i++) {
    int temp; cin >> temp;
    v[temp]++;
  }
  for(int i=1;i<=n;i++) {
    if(v[i]>1) {
      if(!v[i-1]) {
        v[i-1]=v[i]=1;
      }else if(!v[i+1]) {
        v[i+1]=v[i]=1;
      }
    }
  }
  int res=0;
  for(auto i:v) {
    if(!i)res++;
  }
  cout << res;
  return 0;
}