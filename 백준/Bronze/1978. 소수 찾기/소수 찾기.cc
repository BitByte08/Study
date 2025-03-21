#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<bool> v(1001,true);
    v[0]=v[1]=false;
    for (int i=2;i<=1000;i++) {
        if (!v[i]) {
            continue;
        }
        for (int j=i*2;j<=1001;j+=i) {
            v[j]=false;
        }
    }
    int n, sum=0; cin >> n;
    for (int i=0;i<n;i++) {
        int temp; cin >> temp;
        sum+=v[temp];
    }
    cout << sum;
}