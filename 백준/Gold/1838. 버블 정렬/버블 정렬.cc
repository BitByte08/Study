#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int n; cin >> n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int temp; cin >> temp;
        v.push_back(make_pair(temp,i));
    }
    stable_sort(v.begin(),v.end());
    int res=0;
    for(int i=0;i<n;i++) res=max(res,v[i].second-i);
    cout << res;
    return 0;
}

