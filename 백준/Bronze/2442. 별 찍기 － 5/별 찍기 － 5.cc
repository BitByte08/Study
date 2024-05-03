#include <iostream>

using namespace std;

int main(void){
    int t;
    cin >> t;
    int i,j;
    for(i=0;i<t;i++){
        for(j=i;j<t-1;j++){
            cout << ' ';
        }
        for(j=0;j<=i+i;j++){
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}