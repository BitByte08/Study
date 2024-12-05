#include <iostream>
#include <stack>
using namespace std;
int main(void) {
  stack<int> st;
  int n; cin >> n;
  for (int i=0;i<n;i++) {
    int temp; cin >> temp;
    st.push(temp);
  }
  int res = 1;
  int stick = st.top();
  st.pop();
  for (int i=0;!st.empty();i++) {
    if (st.top()>stick) {
      res++;
      stick = st.top();
    }
    st.pop();
  }
  cout << res;
  return 0;
}