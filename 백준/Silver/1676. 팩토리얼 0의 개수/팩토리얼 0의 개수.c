#include <stdio.h>

int main(void){
    int arr[500] = {};
    int n;
    int cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        arr[i] = i;
        for(int j=1;j<=n;j++){
            if(arr[i]%5 == 0){
                arr[i] = arr[i]/5;
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}