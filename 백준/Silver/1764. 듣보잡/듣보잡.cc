#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,t2; cin >> t >> t2;
    map<string,int> m;
    vector<string> res;
    for(int i=0;i<t+t2;i++){
        string s; cin >> s;
        m[s]++;
        if(m[s]>1){
            res.push_back(s);
        }
    }
    sort(res.begin(),res.end());
    cout << res.size() << '\n';
    for(auto i : res){
        cout << i << '\n';
    }
    return 0;
}