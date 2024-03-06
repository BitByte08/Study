#include <stdio.h>

int main(){
    int max=0,idx,n,i,loop = 9;
    int arr[10] = {0};
    for(i=0;i<loop;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
            idx = i;
        }
    }
    printf("%d\n%d",max,idx+1);
    return 0;
}