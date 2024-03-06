#include <stdio.h>

int main(){
    int i,a,b,max;
    scanf("%d",&max);
    for(i=0;i<max;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}