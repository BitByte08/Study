#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int static compare (const void* first, const void* second){
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int main(void) {
    int m,n,i,j,a,b,answer=-1,answer2;
    m=n=i=j=a=b=answer2=0;
    scanf("%d %d",&m,&n);
    a=n;
    for(i=m;i<=n;i++){
        if(i!=1){
            b=0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    b++;
                }
            }
            if(b==2){
                answer2+=i;
                if(a>=i){
                    answer=i;
                    a=answer;
                }
            }
        }
    }
    if(answer2!=0){
        printf("%d\n%d",answer2,answer);
    }else{
        printf("%d",answer);
    }
    return 0;
}
