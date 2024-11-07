#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t = 1;
  while (1) {
    string s; cin >> s;
    if (s[0] == '-') break;
    int result = 0;
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
      char temp = s[i];
      if (temp == '}' && !st.empty() && st.top() == '{') st.pop();
      else st.push(temp);
    }
    while (!st.empty()) {
      char temp1 = st.top(); st.pop();
      char temp2 = st.top(); st.pop();
      if (temp1 == temp2) result++;
      else result += 2;
    }
    cout << t << ". " << result << '\n';
    t++;
  }
  return 0;
}