#include <iostream>

using namespace std;

int main(void){
    int num,i,time=0;
    for(i=0;i<4;i++){
        cin >> num;
        time+=num;
    }
    int x = time/60;
    int y = time%60;
    cout << x << '\n' << y;
    return 0;
}