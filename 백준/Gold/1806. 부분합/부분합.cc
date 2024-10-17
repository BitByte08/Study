#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N,S; cin >> N >> S;
  int start=0,end=0,sum=0,ans=N+1;
  v.resize(N,0);
  for(int i=0;i<N;i++) cin >> v[i];
  while(1) {
    if(sum>=S) {
      ans=min(ans,end-start);
      sum-=v[start++];
    }else if(end==N) break;
    else sum+=v[end++];
  }cout << (ans==N+1?0:ans);
  return 0;
}