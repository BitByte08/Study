#include <iostream>
#include <vector>
using namespace std;
int main(void){
  int n,res=0; cin >> n;
  
  for(int i=0;i<5;i++) {
    int temp; cin >> temp;
    if(temp == n) res++;
  }
  cout << res;
  
  return 0;
}