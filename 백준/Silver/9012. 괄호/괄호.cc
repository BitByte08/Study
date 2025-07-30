#include <iostream>
#include <stack>
using namespace std;
int main(void) {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<char> st;
        for (auto &c : s) {
            if (c == '(') {
                st.push(c);
            }else if (c == ')') {
                if (!st.empty()) st.pop();
                else { st.push(c); break; }
            }
        }
        cout << (st.empty()?"YES":"NO") << '\n';
    }
    return 0;
}