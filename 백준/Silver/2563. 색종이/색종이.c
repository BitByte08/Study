#include <stdio.h>
#include <string.h>
int main(void){
    int arr[100][100] = {};
    int i,j,k,a,x,y,res=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %d",&x,&y);
        for(j=x;j<x+10;j++){
            for(k=y;k<y+10;k++){
                if(arr[j][k]!=1){
                    arr[j][k] = 1;
                    res++;
                }
            }
        }
    }
    printf("%d",res);
    return 0;
}
