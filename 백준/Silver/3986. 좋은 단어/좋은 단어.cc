#include <iostream>
#include <stack>
using namespace std;
int main(void) {
  int n; cin >> n;
  int res = 0;
  while(n--) {
    string s; cin >> s;
    stack<char> st;
    for(auto c : s) {
      if(st.empty()) st.push(c);
      else if(st.top()==c) st.pop();
      else if(st.top()!=c) st.push(c);
    }
    if(st.empty()) res++;
  }
  cout << res;
  return 0;
}