#include <stdio.h>
#include <string.h>
int main(void){
    int i,j=0;
    char arr[5][16];
    for(i=0;i<5;i++){
        scanf("%s",arr[i]);
    }
    for(j=0;j<15;j++){
        for(i=0;i<5;i++){
            if(strlen(arr[i])>j){
                printf("%c",arr[i][j]);
            }
        }
    }
    return 0;
}
