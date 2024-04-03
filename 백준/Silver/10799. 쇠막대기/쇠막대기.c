#include <stdio.h>
#include <string.h>

int main(void){
    int cnt=0,res=0;
    char steel[100050]={};
    scanf("%s",steel);
    for(int i=0;i<strlen(steel)-1;i++){
        if(steel[i]=='(') cnt++;
        else if(steel[i]==')'){
            cnt--;
            if(steel[i-1]!=steel[i]){
                res+=cnt;
            }
            if(steel[i]==steel[i+1]){
                res++;
            }
        }
    }
    printf("%d",res);
    return 0;
}