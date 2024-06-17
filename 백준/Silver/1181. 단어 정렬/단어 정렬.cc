#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<pair<int,string>> v;
    string s;
    int t; cin >> t;

    for(int i=0;i<t;i++){
        cin >> s;
        v.push_back(make_pair(s.size(),s));
    }

    stable_sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    for(int i=0;i<v.size();i++){
        cout << v[i].second << '\n';
    }
    return 0;
}