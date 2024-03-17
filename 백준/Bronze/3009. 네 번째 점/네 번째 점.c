#include <stdio.h>
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
int main(void){
    int arr[2][3]={};
    int a,b,i;
    a=b=i=0;
    for(i=0;i<3;i++){
        scanf("%d %d",&arr[0][i],&arr[1][i]);
    }
    qsort(arr[0],3,sizeof(int),compare);
    qsort(arr[1],3,sizeof(int),compare);
    if(arr[0][0]==arr[0][1]){
        printf("%d ",arr[0][2]);
    }else{
        printf("%d ",arr[0][0]);
    }
    if(arr[1][0]==arr[1][1]){
        printf("%d",arr[1][2]);
    }else{
        printf("%d",arr[1][0]);
    }
    return 0;
}
