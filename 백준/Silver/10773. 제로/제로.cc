#include <iostream>
#include <stack>
using namespace std;
int main(void) {
    stack<int> st;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n) st.push(n);
        else st.pop();
    }
    int sum = 0;
    while (!st.empty()) {
        sum += st.top(); st.pop();
    }
    cout << sum;
    return 0;
}