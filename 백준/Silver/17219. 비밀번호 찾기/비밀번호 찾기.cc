#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<string,string> m;
    int t,t2; cin >> t >> t2;
    string s1,s2;
    while(t--){
        cin >> s1 >> s2;
        m.insert(make_pair(s1,s2));
    }
    while(t2--){
        cin >> s1;
        cout << m[s1] << '\n';
    }
    return 0;
}