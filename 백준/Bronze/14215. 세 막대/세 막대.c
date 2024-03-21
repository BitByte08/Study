#include <stdio.h>
#include <math.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max_side=(a>b?a:b)>c?(a>b?a:b):c;
    int max=a+b+c-max_side;
    if(max<=max_side){
        printf("%d",max+max-1);
    }else{
        printf("%d",max+max_side);
    }
    return 0;
}
