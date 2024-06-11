#include <iostream>

using namespace std;

int main(void){
    int a,b;
    cin >> a >> b;
    int i,j;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}