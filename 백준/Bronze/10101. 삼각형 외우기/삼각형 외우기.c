#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int angle[3]={};
    int i=0,cnt=0;
    for(i=0;i<3;i++){
        scanf("%d",&angle[i]);
        cnt+=angle[i];
    }
    if(cnt==180){
        if(angle[0]==angle[1]&&angle[1]==angle[2]){
            printf("Equilateral");
        }else if(angle[0]==angle[1]||angle[1]==angle[2]||angle[2]==angle[0]){
            printf("Isosceles");
        }else{
            printf("Scalene");
        }
    }else{
        printf("Error");
    }
    return 0;
}
