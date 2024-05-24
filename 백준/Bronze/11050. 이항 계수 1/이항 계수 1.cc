#include <iostream>

using namespace std;

int f(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res=res*i;
    }
    return res;
}
int main(void){
    int N,K;
    cin >> N >> K;
    int a = f(N);
    int b = f(K);
    int c = f(N-K);
    int res = a/(b*c);
    cout << res;
    return 0;
}