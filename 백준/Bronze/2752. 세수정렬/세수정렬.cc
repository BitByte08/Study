#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    vector<int> arr;
    int i,temp;
    for(i=0;i<3;i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    for(i=0;i<3;i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}