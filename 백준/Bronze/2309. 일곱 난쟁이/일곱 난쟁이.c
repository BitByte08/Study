#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int static compare (const void* first, const void* second){
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int main(void) {
    int i,j,cnt;
    i=j=cnt=0;
    int arr[9] = {};
    for(i=0;i<9;i++){
        scanf("%d",&arr[i]);
        cnt+=arr[i];
    }
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            if(cnt-arr[i]-arr[j]==100){
                arr[i]=0;
                arr[j]=0;
                break;
            }
        }
        if(arr[i]==arr[j]&&arr[i]==0){
            break;
        }
    }
    qsort(arr, 9, sizeof(int), compare);
    for(i=2;i<9;i++){
        if(arr[i]!=0){
            printf("%d\n",arr[i]);
        }
    }
}
