#include <stdio.h>

int main(void){
    int i,idx;
    int arr[31] = {0};
    for(i=1;i<=30;i++){
        scanf("%d",&idx);
        arr[idx]=1;
    }
    for(i=1;i<=30;i++){
        if(!arr[i]){
            printf("%d\n",i);
        }
    }
    return 0;
}