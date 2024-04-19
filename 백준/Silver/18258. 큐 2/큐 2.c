#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int start=0;
int empty(int size){
    return size==0?1:0;
}
void push(int *q,int *size){
    int a;
    scanf("%d",&a);
    q[*size]=a;
    *size+=1;
}
int pop(int *q,int *size){
    int temp = q[start];
    q[start]=0;
    start++;
    return temp;
}
int main(void){
    char cmd[6]={};
    int n;
    scanf("%d",&n);
    int *q=(int*)calloc(n+1,sizeof(int));
    int *size=(int*)calloc(1,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%s",cmd);
        if(strcmp(cmd,"push")==0){
            push(q,size);
        }else if(strcmp(cmd,"pop")==0){
            printf("%d\n",empty(*size-start)?-1:pop(q,size));
        }else if(strcmp(cmd,"empty")==0){
            printf("%d\n",empty(*size-start));
        }else if(strcmp(cmd,"front")==0){
            printf("%d\n",empty(*size-start)?-1:q[start]);
        }else if(strcmp(cmd,"back")==0){
            printf("%d\n",empty(*size-start)?-1:q[*size-1]);
        }else if(strcmp(cmd,"size")==0){
            printf("%d\n",*size-start);
        }
    }
    free(q);
    free(size);
    return 0;
}