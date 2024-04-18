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
    int *stack=(int*)calloc(1000000,sizeof(int));
    int *size=(int*)malloc(sizeof(int));
    int t,c;
    *size=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&c);
        if(c==0){
            pop(stack,size);
            continue;
        }
        push(stack,size,c);
    }
    int cnt=0;
    for(int i=0;!empty(size);i++){
        cnt+= pop(stack,size);
    }
    printf("%d",cnt);
    free(size);
    free(stack);
    return 0;
}