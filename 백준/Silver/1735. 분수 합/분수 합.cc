#include <iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(void){
    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int g = gcd((a1*b2 + a2*b1),b1*b2);
    if(g>0) {
        cout << (a1 * b2 + a2 * b1) / g << ' ' << b1 * b2 / g;
    }else{
        cout << (a1 * b2 + a2 * b1) << ' ' << b1 * b2;
    }
    return 0;
}