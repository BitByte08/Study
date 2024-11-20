#include <iostream>
#include <stack>
using namespace std;
int main(void) {
  stack<char> st;
  int res = 0,cnt = 1;
  string s; cin >> s;
  for(int i=0;i<s.length();i++) {
    if(s[i]=='(') {
      st.push(s[i]); cnt*=2;
    }else if(s[i]=='[') {
      st.push(s[i]); cnt*=3;
    }else if(s[i]==')') {
      if(st.empty()||st.top()!='(') { cout << 0; return 0; }
      if(s[i-1]=='(') res+=cnt;
      st.pop(); cnt/=2;
    }else if(s[i]==']') {
      if(st.empty()||st.top()!='[') {cout << 0; return 0;}
      if(s[i-1]=='[') res+=cnt;
      st.pop(); cnt/=3;
    }
  }
  if(!st.empty()) cout << 0;
  else cout << res;
}