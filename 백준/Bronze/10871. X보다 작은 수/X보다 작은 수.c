#include <stdio.h>

int main(){
    long long int a,n;
    int i;
    long long int arr[10000] = {0};
    scanf("%lld %lld",&a,&n);
    for(i=0;i<a;i++){
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<a;i++){
        if(arr[i]<n){
            printf("%lld ",arr[i]);
        }
    }
    return 0;
}