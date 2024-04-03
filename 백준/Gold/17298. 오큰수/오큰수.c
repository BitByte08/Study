#include <stdio.h>
#include <stdlib.h>
int stack_top(int *stack,int *stack_idx){
    return stack[*stack_idx];
}
int stack_pop(int *stack,int *stack_idx){
    int ret = stack[*stack_idx];
    stack[*stack_idx]=0;
    *stack_idx-=1;
    return ret;
}
int stack_push(int *stack,int *stack_idx,int n){
    *stack_idx+=1;
    stack[*stack_idx]=n;
}
int main(void){
    int n,i;
    scanf("%d",&n);
    int *arr=(int*)calloc(n,sizeof(int));
    int *stack=(int*)calloc(n,sizeof(int));
    int *result=(int*) calloc(n,sizeof(int));
    int *stack_idx=(int*)malloc(sizeof(int));
    *stack_idx=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        stack[i]=0;
        result[i]=-1;
    }
    for(i=1;i<=n;i++){
        while((*stack_idx>-1)&&(arr[stack_top(stack,stack_idx)]<arr[i])){//스텍이 비어있지 않고, arr[stack의 첫 번째 값]과 arr[i]와 같다면
            
            result[stack_pop(stack,stack_idx)]=arr[i];
        }
        stack_push(stack,stack_idx,i);
    }
    for(i=0;i<n;i++){
        printf("%d ",result[i]);
    }
    return 0;
}