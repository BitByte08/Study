
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//push_front X: 정수 X를 덱의 앞에 넣는다.
//push_back X: 정수 X를 덱의 뒤에 넣는다.
//pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//size: 덱에 들어있는 정수의 개수를 출력한다.
//empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
//front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.

int empty(int *deque);
int front(int *deque);
int back(int *deque,int *deque_size);
int pop_back(int *deque,int *deque_size);
int pop_front(int *deque,int *deque_size);
int push_back(int *deque,int *deque_size);
int push_front(int *deque,int *deque_size);
int main(void){
    int deque_size=0,t=0;
    int *deque = (int*)calloc(10001,sizeof(int));
    int cmd[15]={};
    int *p_size = &deque_size;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++){
        scanf("%s",cmd);
        if(strcmp("size",cmd)==0){
            printf("%d\n",*p_size);
        }else if(strcmp("empty",cmd)==0){
            printf("%d\n", empty(deque));
        }else if(strcmp("front",cmd)==0){
            printf("%d\n", front(deque));
        }else if(strcmp("back",cmd)==0){
            printf("%d\n", back(deque,p_size));
        }else if(strcmp("push_back",cmd)==0){
            push_back(deque,p_size);
        }else if(strcmp("push_front",cmd)==0){
            push_front(deque,p_size);
        }else if(strcmp("pop_front",cmd)==0){
            pop_front(deque,p_size);
        }else if(strcmp("pop_back",cmd)==0){
            pop_back(deque,p_size);
        }


    }
    return 0;
}
int empty(int *deque){
    return deque[0]==0;
}
int front(int *deque){
    return empty(deque)?-1:deque[0];
}
int back(int *deque,int *deque_size){
    return empty(deque)?-1:deque[*deque_size-1];
}
int pop_back(int *deque,int *deque_size){
    printf("%d\n",back(deque,deque_size));
    if(empty(deque)) return -1;
    *deque_size-=1;
    deque[*deque_size]=0;
}
int pop_front(int *deque,int *deque_size){

    printf("%d\n",front(deque));
    if(empty(deque)) return -1;
    deque[0]= 0;
    for(int i=0;i<*deque_size;i++){
        deque[i]=deque[i+1];
    }
    deque[*deque_size]=0;
    *deque_size-=1;

}

int push_back(int *deque,int *deque_size){
    int a;
    scanf("%d",&a);
    deque[(*deque_size)]=a;
    *deque_size+=1;
}
int push_front(int *deque,int *deque_size){

    int a;
    scanf("%d",&a);
    for(int i=*deque_size;i>0;i--){
        deque[i]=deque[i-1];
    }
    deque[0]=a;
    *deque_size+=1;

}
