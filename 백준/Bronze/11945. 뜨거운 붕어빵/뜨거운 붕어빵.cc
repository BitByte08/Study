#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
    int n, m; cin >> n >> m;
    vector<string> v;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        v.push_back(s);
    }
    for(int i=0; i<n; i++){
        reverse(v[i].begin(), v[i].end());
        cout<<v[i]<<'\n';
    }
    return 0;
}