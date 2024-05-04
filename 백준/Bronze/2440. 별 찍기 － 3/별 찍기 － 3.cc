#include <iostream>

using namespace std;

int main(void){
    int t;
    cin >> t;
    int i,j;
    for(i=0;i<t;i++){
        for(j=i;j<t;j++){
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}