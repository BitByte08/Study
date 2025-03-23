#include <iostream>
#include <stack>
using namespace std;
int main(void) {
    stack<int> st;
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s=="push") {
            int temp; cin >> temp;
            st.push(temp);
        }else if (s=="pop") {
            if (st.empty()) {
                cout << -1 << endl;
                continue;
            }
            cout << st.top() << endl;
            st.pop();
        }else if (s=="size") {
            cout << st.size() << endl;
        }else if (s=="empty") {
            cout << st.empty() << endl;
        }else if (s=="top") {
            if (st.empty()) {
                cout << -1 << endl;
                continue;
            }
            cout << st.top() << endl;
        }
    }
    return 0;
}