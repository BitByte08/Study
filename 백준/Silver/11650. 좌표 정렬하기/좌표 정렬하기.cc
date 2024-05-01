#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<pair<int,int>> a;
    int n;
    cin >> n;
    int i,num1,num2;
    for(i=0;i<n;i++){
        cin >> num1 >> num2;
        a.push_back(make_pair(num1,num2));
    }
    stable_sort(a.begin(),a.end());
    for(i=0;i<n;i++){
        cout << a[i].first << ' ' << a[i].second << '\n';
    }
    return 0;
}