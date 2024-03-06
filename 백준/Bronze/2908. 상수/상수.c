#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int a,b,a2=0,b2=0;
    scanf("%d %d",&a,&b);
    a2 += a/100;
    a2 += (a%10)*100;
    a2 += a%100-(a%10);
    b2 += b/100;
    b2 += (b%10)*100;
    b2 += b%100-(b%10);
    printf("%d",a2>b2 ? a2:b2);
    return 0;
}
