#include <iostream>
using namespace std;
int main(void){
    int t,cnt=0; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        if(n%2) cnt++;
    }
    cout << cnt;
    return 0;
}