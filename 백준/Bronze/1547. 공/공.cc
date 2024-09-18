#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int t; cin >> t;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0; i<t; i++){
        int a,b; cin >> a >> b;
        swap(v[a-1], v[b-1]);
    }

    for(int i=0; i<3; i++){
        if(v[i]==1) cout<<i+1;
    }    

}