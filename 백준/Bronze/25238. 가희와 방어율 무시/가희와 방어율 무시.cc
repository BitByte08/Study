#include <iostream>
using namespace std;
int main(void){
    float a,b; cin >> a >> b;
    a-=a*b/100;
    cout << (a<100?1:0);
    return 0;
}