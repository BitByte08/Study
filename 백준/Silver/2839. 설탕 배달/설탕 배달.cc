#include <iostream>

using namespace std;

int main(void){
    int n;
    int dp=0;
    cin >> n;
    if(n%5==0){
        cout << n/5;
        return 0;
    }
    while(n>0){
        n-=3;
        dp++;
        if(n%5==0){
            dp+=n/5;
            cout << dp;
            return 0;
        }
        else if(n==1||n==2){
            cout << -1;
            return 0;
        }
        else if(n==0){
            cout << dp;
            return 0;
        }
    }
}