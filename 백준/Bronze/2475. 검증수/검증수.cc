#include <iostream>
#include <string>

using namespace std;

int main(void){
    int n,res=0;
    int i;
    for(i=0;i<5;i++){
        cin >> n;
        res+=n*n;
    }
    cout << res%10;
    return 0;
}