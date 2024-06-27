#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<pair<int,int>> v;
    vector<int> res;
    for(int i=1;i<=8;i++){
        int temp; cin >> temp;
        v.push_back(make_pair(temp,i));
    }
    sort(v.begin(),v.end());
    int score=0;
    for(int i=7;i>2;i--){
        score+=v[i].first;
        res.push_back(v[i].second);
    }
    sort(res.begin(),res.end());
    cout << score << '\n';
    for(auto i : res){
        cout << i << ' ';
    }
    return 0;
}

