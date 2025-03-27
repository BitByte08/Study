#include <iostream>
#include <vector>
using namespace std;
vector<int> memo{0,1,1};
int fibo(int n) {
    if (memo[n]) return memo[n];
    return memo[n] = fibo(n-1) + fibo(n-2);
}
int main(void) {
    int n; cin >> n;
    memo.resize(n+1);
    cout << fibo(n);
    return 0;
}