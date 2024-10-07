#include <iostream>
using namespace std;
int main(void) {
  int n; cin >> n;
  int a,b;a=b=0;
  for(int i=0;i<n;i++) {
    int temp; cin >> temp;
    if(temp)a++;
    else b++;
  }
  cout << (a>b?"Junhee is cute!":"Junhee is not cute!");
  return 0;
}