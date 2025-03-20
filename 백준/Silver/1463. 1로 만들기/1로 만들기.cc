#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector<int> v(10000000,0);
    int n; cin >> n;
    for (int i=2;i<=n;i++) {
        v[i] = v[i-1]+1;
        if (i%2==0) {
            v[i] = min(v[i],v[i/2]+1);
        }
        if (i%3==0) {
            v[i] = min(v[i],v[i/3]+1);
        }
    }
    cout << v[n];
}