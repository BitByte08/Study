#include <iostream>

using namespace std;

int main(void) {
    string s;
    int cnt=0;
    cin >> s;
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]== 'e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}