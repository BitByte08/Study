#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector v{500,100,50,10,5,1};
    int n, res=0; cin >> n;
    n=1000-n;
    for (int i : v) {
        res += n/i;
        n = n%i;
    }
    cout << res;
    return 0;
}