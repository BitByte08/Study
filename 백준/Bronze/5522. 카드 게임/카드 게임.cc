#include <iostream>

using namespace std;

int main(void){
    long long int t,cnt=0;
    int i;
    for(i=0;i<5;i++){
        cin >> t;
        cnt+=t;
    }
    cout <<cnt;
    return 0;
}