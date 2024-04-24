#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
bool compare(const pair<int,string> &a, const pair<int,string> &b){
    return a.first < b.first;
}
int main(void){
    int n;
    cin>>n;
    pair<int,string> user;
    vector<pair<int,string>> arr;
    for(int i=0;i<n;i++){
        cin>>user.first>>user.second;
        arr.push_back(user);
    }
    stable_sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<n;i++){
        cout<<arr[i].first<<' '<<arr[i].second<<'\n';
    }
    return 0;
}