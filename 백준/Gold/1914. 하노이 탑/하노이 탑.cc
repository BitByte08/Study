#include <iostream>
#include <cmath>
using namespace std;
void hanoi(int n,int a, int b, int c) {
  if(n==1) cout << a << ' ' << c << '\n';
  else{
    hanoi(n-1,a,c,b);
    cout << a << ' ' << c << '\n';
    hanoi(n-1,b,a,c);
  }
}
int main(void) {
  int n; cin >> n;
  string temp = to_string(pow(2,n));
  int a = temp.find('.');
  temp = temp.substr(0,a);
  temp[temp.length()-1]-=1;
  cout << temp << '\n';
  if(n<=20) {
    hanoi(n,1,2,3);
  }
  return 0;
}