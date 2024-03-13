#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,k,i,j=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        if(n%i==0){
            j++;
        }
        if(j==k){
            printf("%d",i);
            return 0;
        }
    }
    printf("%d",0);
    return 0;
}
