#include <iostream>
#include <stack>
using namespace std;
int main(void) {
    int n,sum=0; cin >> n;
    while (n--) {
        stack<char> st;
        string s; cin >> s;
        for (auto c:s) {
            if (st.empty()) st.push(c);
            else {
                if (st.top()==c) {
                    st.pop();
                }else {
                    st.push(c);
                }
            }
        }
        sum+=st.empty();
    }
    cout << sum;
    return 0;
}