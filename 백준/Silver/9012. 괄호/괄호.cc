#include <iostream>
#include <stack>
using namespace std;
int main(void){
    int t; cin >> t;
    while(t--){
        stack<char> st;
        string s; cin >> s;
        for(char i : s){
            if(st.empty()) st.push(i);
            else if(i=='(') st.push('(');
            else if((i==')')&&(st.top()=='(')) st.pop();
            else st.push(i);
        }
        if(st.empty()) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}