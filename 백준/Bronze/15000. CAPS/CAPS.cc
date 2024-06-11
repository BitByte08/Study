#include <iostream>

using namespace std;

int main(void){
    string s;
    cin >> s;
    int i;
    for(i=0;i<s.size();i++){
        cout << (char)(s[i] - ' ');
    }
    return 0;
}