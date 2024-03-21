#include <stdio.h>
#include <math.h>

int main(void){
    int n,s,i=2;
    scanf("%d",&n);
    s = (int)sqrtf((float)n);
    while(i<=s){
        if(n%i!=0){
            i++;
        }else{
            printf("%d\n",i);
            n/=i;
        }
    }
    if(n>1){
        printf("%d",n);
    }
    return 0;
}
