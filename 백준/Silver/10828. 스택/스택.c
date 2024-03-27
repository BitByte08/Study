#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char cmd[6]="";
    int n,stack=0;
    int i,j;
    scanf("%d",&n);
    int *stack_arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        int put=0;
        scanf("%s",cmd);
        if(strcmp(cmd,"push")==0){
            scanf("%d",&put);
            stack_arr[stack]=put;
            stack++;
        }else if(strcmp(cmd,"top")==0){
            if(stack==0){
                printf("%d",-1);
            }else{
                printf("%d",stack_arr[stack-1]);
            }
            printf("\n");
        }else if(strcmp(cmd,"size")==0){
            printf("%d\n",stack);
        }else if(strcmp(cmd,"empty")==0){
            printf("%d\n",stack==0?1:0);
        }else{
            if(stack==0){
                printf("%d",-1);
            }else{
                stack--;
                printf("%d",stack_arr[stack]);
                stack_arr[stack]=0;
            }
            printf("\n");
        }
    }
    return 0;
}
