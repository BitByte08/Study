#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    int i,j;
    for(i=0;i<t;i++){
        for(j=i;j<t-1;j++){
            cout << ' ';
        }
        for(j=0;j<=i;j++){
            cout << '*';
        }
        cout << '\n';
    }
    for(i=t-1;i>=0;i--){
        for(j=i;j<t;j++){
            cout << ' ';
        }
        for(j=0;j<i;j++){
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}