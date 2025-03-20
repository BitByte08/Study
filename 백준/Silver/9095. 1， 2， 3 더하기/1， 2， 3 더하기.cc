#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v{0,1,2,4,7};
        for (int i=5;i<=n;i++) {
            v.push_back(v[i-1]+v[i-2]+v[i-3]);
        }
        cout << v[n] << endl;
    }
}