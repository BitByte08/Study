#include <stdio.h>

int main(){
    long long int i,n,max=-1000000,min=1000000;
    long long int arr[1000000]={0};
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%lld %lld",min,max);
    return 0;
}