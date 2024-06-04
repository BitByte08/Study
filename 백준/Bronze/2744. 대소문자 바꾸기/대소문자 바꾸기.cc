#include <iostream>

using namespace std;

int main(void){
    string s;
    cin >> s;
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z') cout << (char)(s[i]+' ');
        else cout << (char)(s[i]-' ');
    }
    return 0;
}