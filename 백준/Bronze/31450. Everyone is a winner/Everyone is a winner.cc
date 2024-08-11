#include <iostream>

using namespace std;


int main(void) {
    int n,m; cin >> n >> m;
    if(n%m) cout << "No";
    else cout << "Yes";
    return 0;
}