#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int n; cin >> n;
    vector<int> t(6,0);
    for(int i=0;i<6;i++){
        cin >> t[i];
    }
    int a,b;cin >> a >> b;
    int res = 0;
    for(auto i: t){
        res += i/a + (i%a>0);
    }
    cout << res << '\n';
    cout << n/b << ' ' << n%b;
}