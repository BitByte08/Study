#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(int i=0;i<s.length();i++){
            if(s[i]<='Z'&&'A'<=s[i]) s[i]+=' ';
        }
        cout << s << '\n';
    }
}