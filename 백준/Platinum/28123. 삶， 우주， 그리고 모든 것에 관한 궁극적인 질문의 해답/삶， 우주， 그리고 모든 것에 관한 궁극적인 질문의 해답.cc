#include <iostream>
using namespace std;
int arr[10] = {0, 1, 2, 2, 3, 3, 3, 3, 4, 4};
int main(void) {
    long long n, m, o; cin >> n >> m >> o;
    long long res = (n+1-arr[o]) - 3 * (m-1);
    if (o == 4 || o == 8 || o == 9) res++;
    cout << res;
}