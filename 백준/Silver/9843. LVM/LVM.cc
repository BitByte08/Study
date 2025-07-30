#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void) {
    vector<string> cmds;
    vector<int> args;
    stack<int> st;
    int store = 0;
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cmds.push_back(s);
        if (s == "PUSH" || s == "IFZERO") { int n; cin >> n; args.push_back(n); }
        else args.push_back(0);
    }
    // for (auto cmd : cmds) {
    //     cout << cmd << endl;
    // }
    for (int i = 0; i < cmds.size(); i++) {
        if (!cmds[i].compare(0,4,"PUSH")) st.push(args[i]);
        else if (!cmds[i].compare(0,5,"STORE")) {
            // if (st.empty()) {
            //     cout << "error" << i; return 0;
            // }
            store = st.top(); st.pop();
        }
        else if (!cmds[i].compare(0,4,"LOAD")) st.push(store);
        else if (!cmds[i].compare(0,4,"PLUS")) {
            // if (st.size()<2) {
            //     cout << "error" << i; return 0;
            // }
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            st.push(a+b);
        }
        else if (!cmds[i].compare(0,5,"TIMES")) {
            // if (st.size()<2) {
            //     cout << "error" << i; return 0;
            // }
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            st.push(a*b);
        }
        else if (!cmds[i].compare(0,6,"IFZERO")) {
            // if (st.empty()) {
            //     cout << "error" << i; return 0;
            // }
            int a = st.top(); st.pop();
            if(a==0) i = args[i]-1;
        }
        else if (!cmds[i].compare(0,4,"DONE")) {
            break;
        }
        //cout << st.size() << ' ' << i << '\n';
    }
    cout << st.top();
    return 0;
}
