#include <stdio.h>

int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    int temp = b;
    for(i=0;i<3;i++){
        printf("%d\n",a*(temp%10));
        temp/=10;
    }
    printf("%d",a*b);
    return 0;
}