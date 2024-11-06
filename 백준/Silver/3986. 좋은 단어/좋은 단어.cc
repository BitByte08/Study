#include <iostream>
#include <stack>
using namespace std;
int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n; string s; cin >> n;
  int res = 0;
  while(n--) {
    cin >> s;
    stack<char> st;
    for(auto c : s) {
      if(st.empty()) st.push(c);
      else if(st.top()!=c) st.push(c);
      else if(st.top()==c) st.pop();
    }
    if(st.empty()) res++;
  }
  cout << res;
  return 0;
}