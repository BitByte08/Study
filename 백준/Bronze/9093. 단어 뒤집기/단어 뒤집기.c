#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxstr 1001
int main(void){
    char str[1001]="";
    char stack[21]="";
    int n,cnt=0;
    scanf("%d",&n);
    getchar();
    int i,j,k;
    for(i=0;i<n;i++){
        fgets(str,maxstr,stdin);
        long int len = strlen(str);
        for(j=0;j<len-1;j++){
            if(str[j]!=' '){
                stack[cnt++]=str[j];
            }
            if(str[j]==' '||j==len-2){
                for(k=cnt-1;k>=0;k--){
                    printf("%c",stack[k]);
                }
                printf(" ");
                cnt=0;
            }
        }
        printf("\n");
    }
    return 0;
}