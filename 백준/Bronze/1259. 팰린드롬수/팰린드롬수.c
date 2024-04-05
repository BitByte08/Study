#include <stdio.h>
#include <string.h>
int main(void){
    char num[6]={};
    while(1){
        int p=1;
        scanf("%s",num);
        if(num[0]=='0'){
            break;
        }
        int len = strlen(num)-1;
        for(int i=0;i<strlen(num)/2;i++){
            if((num[i]-'0')!=(num[len-i]-'0')){
                p=0;
            }
        }
        printf("%s\n",p?"yes":"no");
    }
    return 0;
}