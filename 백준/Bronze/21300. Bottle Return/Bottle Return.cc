#include <iostream>
using namespace std;
int main() {
  int res=0;
  for(int i=0;i<6;i++) {
    int temp;cin>>temp;
    res+=temp*5;
  }
  cout << res;
}