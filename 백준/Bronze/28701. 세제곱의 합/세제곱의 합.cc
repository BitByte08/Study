#include <iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int num=0;
    for(int i=1;i<=n;i++){
        num+=i;
    }
    cout << num << '\n' << num*num << '\n' << num*num;
    return 0;
}