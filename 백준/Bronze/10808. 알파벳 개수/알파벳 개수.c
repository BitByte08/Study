#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char *str = (char*)calloc(101,sizeof(int));
    int alpha[26] = {};
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        alpha[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        printf("%d ",alpha[i]);
    }

    return 0;
}