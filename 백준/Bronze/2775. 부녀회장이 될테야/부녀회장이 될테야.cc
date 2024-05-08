#include <iostream>
using namespace std;
int main(void){
    int t,i,j;
    int dp[15][15]={};
    for(i=1;i<=14;i++){
        dp[0][i]=i;
    }
    for(i=1;i<=14;i++){
        for(j=1;j<=14;j++){
            dp[i][j]=dp[i][j-1]+dp[i-1][j];
        }
    }
    cin >> t;
    for(i=0;i<t;i++){
        int a,b;
        cin >> a >> b;
        cout << dp[a][b] << '\n';
    }
    return 0;
}