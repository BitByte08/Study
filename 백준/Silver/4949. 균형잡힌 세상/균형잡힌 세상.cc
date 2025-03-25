#include <iostream>
#include <stack>
using namespace std;
int main(void) {
    while (true) {
        stack<char> st;
        string s; getline(cin,s);
        if (s.front() == '.') return 0;
        for (int i=0;i<s.length()-1;i++) {
            char c = s[i];
            if (c=='('||c=='[') {
                st.push(c);
            }else if (c==')'||c==']') {
                if (st.empty()) {
                    st.push(c);
                    break;
                }
                    if (c==']'&&st.top()=='[') {
                        st.pop();
                    }else if (c==')'&&st.top()=='(') {
                        st.pop();
                    }else {
                        st.push(c);
                        break;
                    }
            }
        }
        if (st.empty()) {
            cout << "yes" << endl;
        }else {
            cout << "no" << endl;
        }
    }
}