#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char c; cin >> c;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout << c;
            }
            c++;
            if(c>'Z'){
                c='A';
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}