#include <iostream>
using namespace std;
int fn1(int n){
    if(n==0) return 1;
    return 10*fn1(n/10);
}
int main(void){
    int a,b,c; cin >> a >> b >> c;
    cout << a+b-c << '\n' << (a*fn1(b))+b-c;
}