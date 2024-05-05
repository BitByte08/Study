#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(const pair<int,int> a, const pair<int,int> b)
{
    if(a.second==b.second){
        return a.first<b.first;
    }else{
        return a.second<b.second;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<pair<int,int>> V;
    int n;
    cin >> n;
    int i;
    for(i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        V.push_back(make_pair(a,b));
    }
    sort(V.begin(),V.end(), compare);
    for(i=0;i<n;i++) {
        cout << V[i].first << ' ' << V[i].second << '\n';
    }
    return 0;
}
