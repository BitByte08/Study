#include <stdio.h>
#include <stdlib.h>
/*
 첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
 */
int main(void){
    int n,max,i,j,cnt,cnt_2;
    max=n=i=j=cnt=cnt_2=0;
    scanf("%d",&max);
    for(i=0;i<max;i++){
        cnt=0;
        scanf("%d",&n);
        if(n==1){
            continue;
        }
        for(j=1;j<=n;j++){
            if(n%j==0){
                cnt++;
            }
        }
        if(cnt==2){
            cnt_2++;
        }
    }
    printf("%d",cnt_2);
    return 0;
}
