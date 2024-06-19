#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main(void){
    stack<char> st;
    string s;
    string tnt;
    cin >> s >> tnt;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
        if(s[i]==tnt[tnt.length()-1]&&st.size()>=tnt.length()){
            string temp;
            for(int j=0;j<tnt.length();j++){
                temp.push_back(st.top());
                st.pop();
            }
            reverse(temp.begin(),temp.end());
            if(temp.compare(tnt)!=0){
                for(int j=0;j<temp.length();j++)st.push(temp[j]);
            }
        }
    }
    string res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(),res.end());
    if(res.empty()) cout << "FRULA";
    else cout << res;
    return 0;
}