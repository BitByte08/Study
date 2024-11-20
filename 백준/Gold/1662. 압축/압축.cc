#include <iostream>
using namespace std;
int decoder(string s, char c){
  static int i = -1; i++;
  int res=0;
  while(s[i++]!=c) {
    if(s[i]=='(') res+=atoi(&s[i-1])*decoder(s,')');
    else res++;
  }
  return res;
}
int main(void){
  string s; cin >> s;
  cout << decoder(s,0);
  return 0;
}