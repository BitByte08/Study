#include <iostream>
using namespace std;
int main(void) {
    int n; cin >> n;
    if (n&1) {
        cout << "CY";
    }else {
        cout << "SK";
    }
    return 0;
}