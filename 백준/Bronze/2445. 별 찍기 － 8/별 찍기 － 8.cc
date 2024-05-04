#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    int i,j;
    for(i=0;i<t;i++) {
        if(i<t) {
            for(j=0;j<=i;j++) {
                cout << '*';
            }
            for(j=1;j<t*2-(i*2+1);j++) {
                cout << ' ';
            }
            for(j=0;j<=i;j++) {
                cout << '*';
            }
        }
        cout << '\n';
    }
    for(i=t-2;i>=0;i--) {
        for(j=0;j<=i;j++) {
            cout << '*';
        }
        for(j=1;j<t*2-(i*2+1);j++) {
            cout << ' ';
        }
        for(j=0;j<=i;j++) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
