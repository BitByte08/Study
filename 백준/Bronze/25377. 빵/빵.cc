#include <iostream>
using namespace std;
int main(void){
  int t,ans = -1; cin >> t;
  while(t--){
    int a,b; cin >> a >> b;
    if(a <= b) {
        if(ans==-1) ans = b;
        ans = min(ans,b);
    }
  }
  cout << ans;
}