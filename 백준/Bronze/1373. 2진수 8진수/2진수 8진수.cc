#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(void) {
    string s; cin >> s;
    for(int i=0;i<s.length()%3;i++) {
        s = '0' + s;
    }
    for(int i=0;i<s.length();i+=3) {
        int temp = (s[i]-'0')*4+(s[i+1]-'0')*2+(s[i+2]-'0');
        cout << temp;
    }
    return 0;
}
