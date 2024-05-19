#include <iostream>

using namespace std;

int main(void) {
    int t,Y,M;
    Y=M=0;
    cin >> t;
    int i;
    for (i=0;i<t;i++) {
        int temp;
        cin >> temp;
        Y+=(temp/30+1);
        M+=(temp/60+1);
    }
    Y*=10;
    M*=15;
    if(Y==M){
        cout << "Y M " << Y;
    }else if(Y>M){
        cout << "M " << M;
    }else{
        cout << "Y " << Y << "\n";
    }
    return 0;
}