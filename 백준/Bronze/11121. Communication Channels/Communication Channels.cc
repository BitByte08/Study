#include <bits/stdc++.h>
using namespace std;
string func1(string a, string b){
  for(int i = 0; i < a.size(); i++) if(a[i] != b[i]) return "ERROR";
  return "OK";
}
int main(void){
  int t; cin >> t;
  while(t--){
    string a, b; cin >> a >> b;
    cout << func1(a,b) << '\n';
  }
}