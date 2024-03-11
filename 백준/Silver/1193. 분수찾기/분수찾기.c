#include <stdio.h>
#include <stdlib.h>

int main(void){
    long long int i,n,x=1,y=1,tf=0;
    scanf("%lld",&n);
    for(i=1;i<n;i++){
        if(tf){
            if(x==1){
                y++;
                tf=0;
            }else{
                y++;
                x--;
            }
        }else if(tf==0){
            if(y==1){
                x++;
                tf=1;
            }else{
                y--;
                x++;
            }
        }
    }
    printf("%lld/%lld",y,x);
    return 0;
}


