#include <iostream>
using namespace std;
int main(void){
  int a,b,c; cin >> a >> b >> c;
  char n,m;
  if(a+b==c) {
    n='+'; m='=';
  }else if(a-b==c) {
    n='-'; m='=';
  }else if(a*b==c) {
    n='*'; m='=';
  }else if(a/b==c) {
    n='/'; m='=';
  }else if(b+c==a) {
    n='='; m='+';
  }else if(b-c==a) {
    n='='; m='-';
  }else if(b*c==a) {
    n='='; m='*';
  }else if(b/c==a) {
    n='='; m='/';
  }
  cout << a << n << b << m << c;
  return 0;
}