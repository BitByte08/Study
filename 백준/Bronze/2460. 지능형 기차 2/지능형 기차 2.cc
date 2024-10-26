#include <iostream>
using namespace std;
int main(void) {
    int sum, res; sum=res=0;
    for(int i = 0; i < 10; i++) {
        int a, b; cin >> a >> b;
        sum += -a + b;
        if (sum > res) res = sum;
    }
    cout << res;
}