#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    int i,j;
    for(i=0;i<t;i++) {
        for(j=0;j<i;j++) {
            cout << ' ';
        }
        for(j=0;j<t*2-(i*2+1);j++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
