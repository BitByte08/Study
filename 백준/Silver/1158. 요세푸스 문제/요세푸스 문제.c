#include <stdio.h>
#include <stdlib.h>

int main(void){
    int t=0,a;
    scanf("%d %d",&t, &a);
    int arr[t];
    for(int i=0;i<t;i++){
        arr[i]=i+1;
    }
    printf("<");
    int idx=a-1,max=t;
    while(t>1){
        if(idx>=t){
            idx%=t;
        }
        if(arr[idx]==0) {
            idx++;
        }else{
            printf("%d, ", arr[idx]);
            arr[idx] = 0;
            idx+=a-1;
            --t;
        }
        for(int i=0;i<t+1;i++){
            if(arr[i]==0){
                arr[i] = arr[i+1];
                arr[i+1]=0;
            }
        }

    }
    printf("%d>",arr[0]);
    return 0;
}
