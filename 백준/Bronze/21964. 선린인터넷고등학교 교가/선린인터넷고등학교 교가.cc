#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(void){
    int len; cin >> len;
    string s; cin >> s;
    cout << s.substr(len-5);
    return 0;
}

