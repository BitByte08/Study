#include <iostream>
#include <vector>

using namespace std;

int main(void){
    while(1){
        string s;
        getline(cin, s);
        int cnt=0;
        if(s=="#") break;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') cnt++;
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') cnt++;
        }
        cout << cnt << '\n';
    }
}