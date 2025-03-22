#include <iostream>
#define TIME 1260
using namespace std;
int main(void){
    int h,m; cin >> h >> m;
    m += (h+12)*60;
    cout << m - TIME;
    return 0;
}