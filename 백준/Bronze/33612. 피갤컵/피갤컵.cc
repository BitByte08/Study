#include <iostream>
using namespace std;
int main(void){
    int y = 2024, m = 8;
    int n; cin >> n;
    for(int i=1;i<n;i++){
        m+=7; y+=(m-1)/12;
        if(m>12) m=m%12;
    }
    cout << y << ' ' << m;
    return 0;
}