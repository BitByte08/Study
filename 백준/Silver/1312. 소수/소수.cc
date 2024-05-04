#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c;
    int result = 0;
    cin >> a >> b >> c;
    if(a%b==0) {
        cout<<0;
        return 0;
    }
    if(a>b) a%=b;
    int i;
    for(i=0;i<c;i++) {
        a*=10;
        result=(int)(a/b);
        a%=b;
    }
    cout << result;
    return 0;
}