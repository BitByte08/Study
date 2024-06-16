#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int t,n,temp,res=0;
    cin >> t >> n;
    while(t--){
        cin >> temp;
        v.push_back(temp);
    }
    for(int i=v.size()-1;i>=0;i--){
        res+=n/v[i];
        n%=v[i];
    }cout << res;
    return 0;
}
