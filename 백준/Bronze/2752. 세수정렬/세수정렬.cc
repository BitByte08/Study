#include <iostream>
using namespace std;
int main(void) {
    int a,b,c; cin >> a >> b >> c;
    cout << min(a,min(b,c)) << ' ';
    cout << a + b + c - max(a,max(b,c)) - min(a,min(b,c)) << ' ';
    cout << max(a,max(b,c));
    return 0;
}