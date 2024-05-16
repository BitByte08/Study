#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int n,i;
    cin >> n;
    vector<long long> arr;
    vector<long long> result;
    for(i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
        result.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    for(i=0;i<n;i++) {
        cout << lower_bound(arr.begin(),arr.end(),result[i])-arr.begin()<<' ';
    }
    return 0;
}