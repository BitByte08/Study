#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int angle[3]={};
    int i=0,cnt=0,n=0,max;
    while(1){
        cnt=0;
        for(i=0;i<3;i++){
            scanf("%d",&angle[i]);
            cnt+=angle[i];
        }
        if(angle[0]==angle[1]&&angle[1]==angle[2]&&angle[2]==0){
            break;
        }
        max=(angle[0]>angle[1]?angle[0]:angle[1])>angle[2]?(angle[0]>angle[1]?angle[0]:angle[1]):angle[2];
        cnt-=max;
        if(max>=cnt){
            printf("Invalid\n");
        }else if(angle[0]==angle[1]&&angle[1]==angle[2]){
            printf("Equilateral\n");
        }else if(angle[0]==angle[1]||angle[1]==angle[2]||angle[0]==angle[2]){
            printf("Isosceles\n");
        }else{
            printf("Scalene\n");
        }
    }
    return 0;
}
