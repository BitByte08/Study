#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(void){
    while(1) {
        vector<int> v;
        int t; cin >> t;
        if(!t) return 0;
        for(int i=0;i<t;i++){
            int temp; cin >> temp;
            v.push_back(temp);
        }
        v.erase(unique(v.begin(), v.end()),v.end());
        for(auto i : v){
            cout << i << ' ';
        }
        cout << "$\n";
    }
    return 0;
}

