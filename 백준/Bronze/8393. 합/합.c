#include <stdio.h>

int main(){
    int i,a,cnt=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        cnt+=i;
    }
    printf("%d",cnt);
    return 0;
}