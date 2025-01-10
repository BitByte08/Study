#include <iostream>
using namespace std;
int main(void){
    int n,t; cin >> n >> t;
    for(int i=0;i<t;i++){
        int temp; cin >> temp;
        n-=temp;
    }
    if(n>0) cout << "Padaeng_i Cry";
    else cout << "Padaeng_i Happy";
    
    return 0;
}