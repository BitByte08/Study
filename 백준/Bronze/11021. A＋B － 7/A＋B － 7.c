#include <stdio.h>

int main(){
    int a,b,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d\n",i+1,a+b);
    }
    return 0;
}