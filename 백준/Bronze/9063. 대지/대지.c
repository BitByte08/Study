#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    long int n,i;
    int a,b,max_a,min_a,max_b,min_b;
    a=b=0;
    max_a=max_b= -10000;
    min_a=min_b= 10000;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>max_a){
            max_a=a;
        }
        if(a<min_a){
            min_a=a;
        }
        if(b>max_b){
            max_b=b;
        }
        if(b<min_b){
            min_b=b;
        }
    }
    if(n!=1){
        printf("%d",(max_a-min_a)*(max_b-min_b));
    }else{
        printf("%d",0);
    }
    return 0;
}
