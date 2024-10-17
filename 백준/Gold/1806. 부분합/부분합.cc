#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main() {
  int N,S; cin >> N >> S;
  v.resize(N,0);
  for(int i=0;i<N;i++) cin >> v[i];
  int start=0,end=0,sum=0,ans=N+1;
  while(1) {
    if(sum>=S) {
      ans=min(ans,end-start);
      sum-=v[start++];
    }
    else if(end==N) break;
    else sum+=v[end++];
  }
  cout << (ans==N+1?0:ans);
  return 0;
}