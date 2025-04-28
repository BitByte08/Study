#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i < n; i++) cin >> v[i];
    long long cost = 0;
    for (int i = 0; i < n; i++) {
        if(v[i+1] > v[i+2]){
            int cnt = min(v[i], v[i+1]- v[i+2]);
            cost += 5*cnt;
            v[i] -= cnt;
            v[i+1] -= cnt;
            int cnt2 = min(min(v[i], v[i+1]), v[i+2]);
            cost += 7*cnt2;
            v[i] -= cnt2;
            v[i+1] -= cnt2;
            v[i+2] -= cnt2;
        }else{
            int cnt2 = min(min(v[i], v[i+1]), v[i+2]);
            cost += 7*cnt2;
            v[i] -= cnt2;
            v[i+1] -= cnt2;
            v[i+2] -= cnt2;
            int cnt = min(v[i], v[i+1]);
            cost += 5*cnt;
            v[i] -= cnt;
            v[i+1] -= cnt;
        }
        cost += 3*v[i];
        v[i] = 0;
    }
    cout << cost << endl;

    return 0;
}