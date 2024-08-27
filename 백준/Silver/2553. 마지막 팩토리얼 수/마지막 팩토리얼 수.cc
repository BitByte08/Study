#include <iostream>
using namespace std;
int main() {
  long long n,res=1; cin >> n;
  for(int i=1;i<=n;i++) {
    res*=i;
    res%=1000000000000;
    while(res%10==0)res/=10;
  }
  cout << res%10;
}