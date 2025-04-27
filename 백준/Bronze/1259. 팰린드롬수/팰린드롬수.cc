#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    while(true){
        string s; cin >> s;
        if(s=="0") return 0;
        string re = s;
        reverse(re.begin(),re.end());
        if(re == s) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}