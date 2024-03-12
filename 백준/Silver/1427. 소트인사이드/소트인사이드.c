#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    long long int n;
    int i=0,j,k;
    int arr[10]={};
    scanf("%lld",&n);
    while(n>=10){
        arr[i] = n%10;
        n-=n%10;
        n/=10;
        i++;
    }
    arr[i] = n;
    for(j=0;j<=i;j++){
        for(k=j;k<=i;k++){
            if(arr[j]<arr[k]){
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for(j=0;j<=i;j++){
        printf("%d",arr[j]);
    }
    return 0;
}
