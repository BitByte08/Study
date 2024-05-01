#include <iostream>

using namespace std;

int main(void){
    int a,b,cnt=0;
    cin >> a >> b;
    int i;
    for(i=0;i<=b;i++){
        cnt+=a;
    }
    cout << cnt;
    return 0;
}