#include <stdio.h>

int main(void){
    int i,loop = 10,temp,j,cnt=1;
    int arr[11] = {0};
    for(i=0;i<loop;i++){
        scanf("%d",&temp);
        arr[i] = temp%42;
    }
    for(i=0;i<loop;i++){
        for(j=i;j<loop;j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    temp = arr[0];
    for(i=0;i<loop;i++){
        if(temp != arr[i]){
            cnt++;
            temp = arr[i];
        }
    }
    printf("%d",cnt);
    return 0;
}
