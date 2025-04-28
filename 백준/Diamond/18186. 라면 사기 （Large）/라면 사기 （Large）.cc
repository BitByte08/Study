#include <iostream>
#include <vector>
using namespace std;
vector<long long> v(1000003);
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n,b,c;cin >> n >> b >> c;
    for (int i = 1; i <= n; i++) cin >> v[i];
    long long cost = 0;
    if(b < c){
        for(int i = 1; i <= n; i++)
            cost += v[i];
        cout << cost*b << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        if(v[i+1] > v[i+2]){
            int cnt = min(v[i], v[i+1]- v[i+2]);
            cost += (b+c)*cnt;
            v[i] -= cnt;
            v[i+1] -= cnt;
            int cnt2 = min(min(v[i], v[i+1]), v[i+2]);
            cost += (b+2*c)*cnt2;
            v[i] -= cnt2;
            v[i+1] -= cnt2;
            v[i+2] -= cnt2;
        }else{
            int cnt2 = min(min(v[i], v[i+1]), v[i+2]);
            cost += (b+2*c)*cnt2;
            v[i] -= cnt2;
            v[i+1] -= cnt2;
            v[i+2] -= cnt2;
            int cnt = min(v[i], v[i+1]);
            cost += (b+c)*cnt;
            v[i] -= cnt;
            v[i+1] -= cnt;
        }
        cost += b*v[i];
        v[i] = 0;
    }
    cout << cost << endl;

    return 0;
}