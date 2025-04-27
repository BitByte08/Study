#include <iostream>
using namespace std;
int main(void){
    int res = 0, resIdx = 0;
    for(int i=0;i<10;i++){
        int m; cin >> m;
        if(res<m){
            res=m;
            resIdx=i+1;
        }
    }
    cout << res << '\n' << resIdx;
    return 0;
}