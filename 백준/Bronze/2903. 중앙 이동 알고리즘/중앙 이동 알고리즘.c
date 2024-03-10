#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
    int i,n,a=2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a+=a-1;
    }
    printf("%d",a*a);
    return 0;
}
