#include <iostream>
#include <stack>
#include <sstream>
using namespace std;
int main(void) {
  int n; cin >> n;
  stack<string> st;
  getchar();
  for (int i=1;i<=n;i++) {
    string s,temp; getline(cin, s);
    stringstream ss(s);
    while (ss>>temp) {
      st.push(temp);
    }
    cout << "Case #" << i << ": ";
    while (!st.empty()) {
      cout << st.top() << ' '; st.pop();
    }
    cout << '\n';
  }
  return 0;
}
