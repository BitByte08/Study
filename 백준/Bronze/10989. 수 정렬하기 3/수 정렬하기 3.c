#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    long int i,n,j;
    int temp,a=0,b=1;
    scanf("%ld",&n);
    int arr[10001]={};
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        arr[temp]++;
    }
    for(i=0;i<10001;i++){
        if(arr[i]>0){
            arr[i]+=a;
            a=arr[i];
            for(j=arr[i-b];j<arr[i];j++){
                printf("%ld\n",i);
            }
            b=1;
        }else{
            b++;
        }
    }
    return 0;
}
