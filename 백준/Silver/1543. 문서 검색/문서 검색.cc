#include <iostream>
#include <vector>
using namespace std;
int main() {
  string s; getline(cin,s);
  string s2; getline(cin,s2);
  int cnt=0;
  for(int i=0;i<s.length();i++) {
    bool t=true;
    for(int j=0;j<s2.length();j++) {
      if(s[i+j]!=s2[j]) {
        t=false; break;
      }
    }
    if(t) { i+=s2.length()-1; cnt++; }
  }
  cout << cnt;
  return 0;
}