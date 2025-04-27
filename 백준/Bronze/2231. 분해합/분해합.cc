#include <iostream>
using namespace std;
int fn1(int n){
    if(n<10) return n;
    return n%10 + fn1(n/10);
}
int main(void){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int temp = i + fn1(i);
        if(temp == n) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}