#include <stdio.h>
#include <stdlib.h>
void push(int *stack,int *size){
    int a;
    scanf("%d",&a);
    stack[*size]=a;
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
        switch (c) {
            case 1:
                push(stack,size);
                break;
            case 2:
                printf("%d\n",pop(stack,size));
                break;
            case 3:
                printf("%d\n",*size);
                break;
            case 4:
                printf("%d\n",empty(size));
                break;
            case 5:
                printf("%d\n", empty(size)?-1:stack[*size-1]);
                break;
        }
    }
    free(size);
    free(stack);
    return 0;
}