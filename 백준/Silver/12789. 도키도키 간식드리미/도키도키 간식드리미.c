#include <stdio.h>
#include <stdlib.h>
void push(int *stack,int *size,int c){
    stack[*size]=c;
    *size+=1;
}
int empty(int *size){
    return *size==0?1:0;
}
int pop(int *stack,int *size){
    if(empty(size)){
        return -1;
    }
    *size-=1;
    return stack[*size];
}

int main(void){
    int *stack=(int*)calloc(1001,sizeof(int));
    int *size=(int*)malloc(sizeof(int));
    int t,c,a=0,cnt=0;
    *size=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&c);
        push(stack,size,c);
        while(stack[*size-1]==a+1){
            a++;
            cnt++;
            pop(stack,size);
        }
    }
    printf("%s",cnt==t?"Nice":"Sad");
    free(size);
    free(stack);
    return 0;
}