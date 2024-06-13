#include <iostream>

using namespace std;


int euclid(int a, int b){
    while(b){
        int temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a>=c||b>=c) {
            int euc = euclid(a,b);
            if(c%euc==0){
                cout << "Yes\n";
                continue;
            }
        }
        cout << "No\n";
    }
    return 0;
}