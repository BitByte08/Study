#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char N[2][101]={};//N[0] 입력 받는 곳, N[1] 문자 저장 후 판별
    int i,j,k,a,len,len2,b=0,tf=0,res=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%s",N[0]);
        for(j=0;j<100;j++){
            N[1][j] = ' ';
        }
        b=0;
        tf=1;
        N[1][0] = N[0][0];
        len = strlen(N[0]);
        for(j=1;j<len;j++){
            len2 = strlen(N[1]);
            if(N[0][j-1]!=N[0][j]){
                for(k=0;k<len2;k++){
                    if(N[0][j]==N[1][k]){
                        tf=0;
                        //printf("%d %d %d\n",i,j,k);
                    }
                }
                b++;
                N[1][b] = N[0][j];
            }
        }
        if(tf){
            //printf("%d\n",i);
            res++;
        }
    }
    printf("%d",res);
    return 0;
}
