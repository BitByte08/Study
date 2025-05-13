#include <iostream>
using namespace std;
int main(void){
    int a,b,c,d,e; cin >> a >> b >> c >> d >> e;
    a=max(40,a);
    b=max(40,b);
    c=max(40,c);
    d=max(40,d);
    e=max(40,e);
    cout << (a+b+c+d+e)/5;
    return 0;
}