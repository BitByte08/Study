#include <iostream>
using namespace std;
int main(void){
    int cnt = 300;
    for(int i=0;i<4;i++) {int temp; cin >> temp; cnt+=temp;}
    cout << (cnt<=1800?"Yes":"No");
    return 0;
}