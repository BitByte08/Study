#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int d=a*b-c;
    cout << (d<0?0:d);
    return 0;
}