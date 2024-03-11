#include <stdio.h>
#include <string.h>
int main(void){
    int i,j,n,a=0;
    int arr[5]={};
    for(i=0;i<5;i++){
        scanf("%d",&n);
        a+=n;
        arr[i] = n;
    }
    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            if(arr[i]>arr[j]){
                n=arr[i];
                arr[i]=arr[j];
                arr[j]=n;
            }
        }
    }
    printf("%d\n%d",a/5,arr[2]);
    return 0;
}
