#include <stdio.h>

int main(){
    int a,i,b,cnt=0;
    int arr[101] = {0};
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(i=0;i<a;i++){
        if(arr[i] == b)cnt++;
    }
    printf("%d",cnt);
    return 0;
}