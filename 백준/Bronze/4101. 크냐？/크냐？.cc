#include <iostream>
using namespace std;
int main(void){
    int a,b;
    while(1){
        cin >> a >> b;
        if(a==0&&b==0){
            break;
        }
        cout << (a>b?"Yes":"No") << '\n';
    }
    return 0;
}