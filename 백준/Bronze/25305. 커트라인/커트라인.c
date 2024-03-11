#include <stdio.h>
#include <string.h>
int main(void){
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d",arr[m-1]);
    return 0;
}
