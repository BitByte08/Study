#include <iostream>
using namespace std;
int main(void) {
    int n,sum=0; cin >> n;
    while (n>=0) {
        if (n%5==0) {
            cout << sum+n/5 << endl;
            return 0;
        }else{
            n -= 3;
            sum++;
        }
    }
    cout << -1;
    return 0;
}