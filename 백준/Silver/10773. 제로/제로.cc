#include <iostream>
#include <stack>
using namespace std;
int main(void) {
    stack<int> st;
    int n; cin >> n;
    for (int i=0;i<n;i++) {
        int temp; cin >> temp;
        if (temp) st.push(temp);
        else st.pop();
    }
    int sum = 0;
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    cout << sum;
    return 0;
}