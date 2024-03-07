#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf(" ");
        }
        for(j=0;j<i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=n;j>i;j--){
            printf(" ");
        }
        for(j=0;j<i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
