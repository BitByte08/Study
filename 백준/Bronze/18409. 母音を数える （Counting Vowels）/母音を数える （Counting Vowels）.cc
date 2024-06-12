#include <iostream>

using namespace std;

int main() {
    string s;
    int res=0;
    int num;
    cin >> num >> s;
    for(int i=0;i<num;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') res++;
    }
    cout << res;
    return 0;
}