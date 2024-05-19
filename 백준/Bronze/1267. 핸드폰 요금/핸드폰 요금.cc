#include <iostream>

using namespace std;

int main(void) {
    int y,m,i,t,num;
    cin >> t;
    y=m=0;
    for(i=0;i<t;i++){
        cin >> num;
        y+=num/30+1;
        m+=num/60+1;
    }
    y*=10;
    m*=15;
    if(y<m){
        cout << 'Y' << ' ' << y;
    }else if(y>m){
        cout << 'M' << ' ' << m;
    }else{
        cout << 'Y' << ' ' << 'M' << ' ' << y;
    }
    return 0;
}