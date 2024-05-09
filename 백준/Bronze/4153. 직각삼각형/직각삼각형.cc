#include <iostream>

using namespace std;

int main(void){
    int a,b,c;
    while(1){
        cin >> a >> b >> c;
        if(a==b&&b==c&&c==a&&a==0){
            break;
        }
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            int temp = c;
            c = b;
            b = temp;
        }
        cout << ((a*a)+(b*b)==(c*c)?"right":"wrong");
        cout << '\n';
    }

    return 0;
}