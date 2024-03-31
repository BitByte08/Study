#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int empty(int a){
    return a==0?1:0;
}
void push(int *num,int *q_size,int x){
    num[(*q_size)++]=x;
}
void pop(int *num,int *q_size){
    printf("%d\n",empty(num[0])?-1:num[0]);
    if(empty(num[0]))return;
    int i;
    (*q_size)--;
    for(i=0;i<=(*q_size);i++){
        num[i]=num[i+1];
    }
}
int main(void){
    char cmd[6]="";
    int *q = (int*)calloc(10000,sizeof(int));
    int t=0,i,qsize=0;
    int *p_qsize=&qsize;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",cmd);
        if(strcmp(cmd,"push")==0){
            int x;
            scanf("%d",&x);
            push(q,p_qsize,x);
        }else if(strcmp(cmd,"pop")==0){
            pop(q,p_qsize);
        }else if(strcmp(cmd,"empty")==0){
            printf("%d\n",empty(q[0]));
        }else if(strcmp(cmd,"size")==0){
            printf("%d\n",qsize);
        }else if(strcmp(cmd,"front")==0){
            if(!(empty(q[0]))){
                printf("%d\n",q[0]);
            }else {
                printf("%d\n", -1);
            }
        }else if(strcmp(cmd,"back")==0){
            if(!(empty(q[qsize-1]))){
                printf("%d\n",q[qsize-1]);
            }else {
                printf("%d\n", -1);
            }
        }
    }
    free(q);
}