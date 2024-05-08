#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(void){
    int tf=1;
    string s;
    while(1){
        tf=1;
        stack<char> st;
        getline(cin, s);
        if((s[0]=='.'&&s.size()==1)){
            break;
        }
        for(int i=0;i<=s.size();i++){
            if(s[i]=='('||s[i]=='['){
                st.push(s[i]);
            }else if(s[i]==')'){
                if(st.empty()){
                    tf=0;
                    break;
                }
                if(st.top()!='('){
                    tf=0;
                    break;
                }
                st.pop();
            }else if(s[i]==']'){
                if(st.empty()){
                    tf=0;
                    break;
                }
                if(st.top()!='['){
                    tf=0;
                    break;
                }
                st.pop();
            }
        }
        if(!st.empty()){
            tf=0;
        }
        cout << (tf?"yes":"no") << '\n';
    }
    return 0;
}