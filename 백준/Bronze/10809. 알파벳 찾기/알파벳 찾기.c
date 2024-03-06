#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char s[100];
    int i,j;
    int alpha[26];
    for(i=0;i<26;i++){
        alpha[i] = -1;
    }
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(alpha[s[i]-'a']==-1){
            alpha[s[i]-'a']=i;
        }
    }
    for(i=0;i<26;i++){
        printf("%d ",alpha[i]);
    }
    return 0;
}
