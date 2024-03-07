#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int i;
    int chess[6] = {1,1,2,2,2,8};
    int input[6];
    for(i=0;i<6;i++){
        scanf("%d",&input[i]);
        printf("%d ",chess[i]-input[i]);
    }
    return 0;
}
