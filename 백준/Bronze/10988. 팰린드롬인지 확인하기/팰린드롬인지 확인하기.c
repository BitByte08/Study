#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char str[102]={};
    int i;
    scanf("%s",str);
    int len = strlen(str);
    for(i=0;i<=len/2;i++){
        if(str[i] != str[len-i-1]){
            printf("%d",0);
            return 0;
        }
    }
    printf("%d",1);
    return 0;
}
