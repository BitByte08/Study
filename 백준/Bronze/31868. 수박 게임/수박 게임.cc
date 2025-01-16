#include <iostream>
using namespace std;
int main(void){
  int n,k; cin >> n >> k;
  for(int i=1;i<n;i++){
    k/=2;
  }
  cout << k;
  return 0;
}