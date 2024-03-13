#include <stdio.h>
#include <stdlib.h>
/*
 테스트케이스 마다 한줄에 하나씩 출력해야 한다.

 n이 완전수라면, n을 n이 아닌 약수들의 합으로 나타내어 출력한다(예제 출력 참고).

 이때, 약수들은 오름차순으로 나열해야 한다.

 n이 완전수가 아니라면 n is NOT perfect. 를 출력한다.
 */
int main(void){
    int n,i,cnt,add;
    while(1){
        add=cnt=n=i=0;
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        for(i=1;i<n;i++){
            if(n%i==0){
                cnt+=i;
                add=i;
            }
        }
        if(cnt==n){
            printf("%d = ",n);
            for(i=1;i<n;i++){
                if(n%i==0){
                    printf("%d",i);
                    if(i!=add){
                        printf(" + ");
                    }
                }
            }
            printf("\n");
        }else{
            printf("%d is NOT perfect.\n",n);
        }
    }
    return 0;
}
