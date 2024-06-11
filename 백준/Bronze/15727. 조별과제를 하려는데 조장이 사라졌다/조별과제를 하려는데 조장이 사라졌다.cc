#include <iostream>

using namespace std;

int main(void){
    int a;
    cin >> a;
    int res = a/5;
    if(a%5!=0) res++;
    cout << res;
    return 0;
}