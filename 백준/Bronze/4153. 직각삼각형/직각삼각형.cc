#include <iostream>
using namespace std;
int main(void){
    while(true){
        int a,b,c; cin >> a >> b >> c;
        if(!a&&!b&&!c) return 0;
        a *= a;
        b *= b;
        c *= c;
        int temp = a+b+c - max(a,max(b,c));
        cout << (temp==max(a,max(b,c))?"right":"wrong") << '\n';
    }
}