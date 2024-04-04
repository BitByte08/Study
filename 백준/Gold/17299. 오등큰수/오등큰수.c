#include <stdio.h>
#include <stdlib.h>
int front_stack(int *stack,int *stack_idx){
    return stack[*stack_idx];
}
int pop_stack(int *stack,int *stack_idx){
    int res = stack[*stack_idx];
    stack[*stack_idx]=0;
    *stack_idx-=1;
    return res;
}
void push_stack(int *stack,int *stack_idx,int var){
    *stack_idx+=1;
    stack[*stack_idx]=var;
}
int main(void){
    int a=0,n=0,i,stack_idx=0;
    scanf("%d",&a);
    int *f=(int*)calloc(1000005,sizeof(int));
    int *t=(int*)calloc(1000001,sizeof(int));
    int *stack=(int*)calloc(1000001,sizeof(int));
    int *answer=(int*)calloc(1000001,sizeof(int));
    int *p_idx = &stack_idx;
    for(i=0;i<a;i++){
        answer[i]=-1;
        scanf("%d",&n);
        t[i]=n;
        f[n]++;
    }
    for(i=0;i<a;i++){
        while((*p_idx>-1)&&(f[t[front_stack(stack,p_idx)]]<f[t[i]])){
            answer[pop_stack(stack,p_idx)]=t[i];
        }
        push_stack(stack,p_idx,i);
    }

    for(i=0;i<a;i++){
        printf("%d ",answer[i]);
    }
    free(f);
    free(t);
    free(answer);
    free(stack);
    return 0;
}

