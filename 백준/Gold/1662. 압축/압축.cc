#include <iostream>
#include <stack>
#include <cctype>
#define ADD res+=st.top(); st.pop();
using namespace std;
int main(){
  stack<int> st;
  string s; cin >> s;
  int res=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='(') st.push(-1);
    else if(isdigit(s[i])){
      if(s[i+1]=='(') st.push(s[i]-'0');
      else st.push(1);
    }else{
      res=0;
      while(st.top()!=-1) { ADD }
      st.pop();
      res*=st.top(); st.pop();
      st.push(res);
    }
  }
  res=0;
  while(!st.empty()){ ADD }
  cout << res;
}