#include <iostream>
using namespace std;
int main(void) {
    long int n; cin >> n;
    if ((n&1)==0) {
        cout << "CY";
    }else {
        cout << "SK";
    }
    return 0;
}