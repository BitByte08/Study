#include <iostream>

using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    cout << (2>=m?"NEWBIE!":(m<=n?"OLDBIE!":"TLE!"));
    return 0;
}