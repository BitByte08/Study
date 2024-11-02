#include <iostream>
using namespace std;
int main(void){
    int res = 0;
    while(true){
        int n; cin >> n;
        if(n==-1) break;
        res+=n;
    }
    cout << res;
    return 0;
}