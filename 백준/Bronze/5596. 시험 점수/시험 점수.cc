#include <iostream>

using namespace std;

int main(void) {
    int a,b,temp,i;
    a=b=0;
    for(i=0;i<4;i++) {
        cin >> temp;
        a+=temp;
    }
    for(i=0;i<4;i++) {
        cin >> temp;
        b+=temp;
    }
    cout << (a>b||a==b?a:b);
    return 0;
}