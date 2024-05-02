#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long long int n,i,a,cnt=0;
    cin >> n;
    unsigned long long int num1 = (n-1)*n/2;
    for(i=0;i<n;i++){
        cin >> a;
        cnt+=a;
    }
    cout << cnt-num1;
    return 0;
}