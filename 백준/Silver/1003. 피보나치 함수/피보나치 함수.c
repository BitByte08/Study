#include <stdio.h>
#define DP_MAX 41
int main(void){
    int dp[2][DP_MAX]={};
    dp[0][0]=dp[1][1]=1;
    dp[0][1]=dp[1][0]=0;
    int i;
    for(i=2;i<DP_MAX;i++){
        dp[0][i]=dp[0][i-1]+dp[0][i-2];
        dp[1][i]=dp[1][i-1]+dp[1][i-2];
    }
    int t,testcase;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&testcase);
        printf("%d %d\n",dp[0][testcase],dp[1][testcase]);
    }
    return 0;
}