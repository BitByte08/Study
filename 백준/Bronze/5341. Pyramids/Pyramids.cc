#include <iostream>

using namespace std;

int main(){
    while(1){
        int n,res=0;
        cin >> n;
        if(n==0) break;
        int i;
        for(i=1;i<=n;i++){
            res+=i;
        }
        cout << res << '\n';
    }
    return 0;
}