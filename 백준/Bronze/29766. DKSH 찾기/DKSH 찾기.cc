#include <iostream>
using namespace std;
int main(void) {
    string s; cin >> s;
    int cnt=0;
    for (int i=0;i<s.length();i++) if (s[i]=='D'&&s[i+1]=='K'&&s[i+2]=='S'&&s[i+3]=='H') cnt++;
    cout << cnt;
    return 0;
}