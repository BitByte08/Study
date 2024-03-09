#include <stdio.h>

int main(void){
    int i,j,max_x=1,max_y=1,max=0;
    int a[10][10]={};
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            scanf("%d",&a[i][j]);
            //printf("%d %d\n",i,j);
            if(max<a[i][j]){
                max=a[i][j];
                max_x=i;
                max_y=j;
            }
        }
    }
    printf("%d\n%d %d",max,max_x,max_y);
    return 0;
}