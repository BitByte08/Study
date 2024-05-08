#include <iostream>
using namespace std;
int main(void){
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        long long int res=1;
        int a,b,j,k=1;
        cin >> a >> b;
        for(j=b;j>b-a;j--){
            res*=j;
            res/=k;
            k++;
        }
        cout << res << '\n';
    }
    return 0;
}