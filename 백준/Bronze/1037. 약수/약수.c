#include <stdio.h>

int main(void){
    int min=1000000,max=2,n,i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        if(min>temp){
            min=temp;
        }
        if(temp>max){
            max=temp;
        }
    }
    printf("%d",max*min);
    return 0;
}

