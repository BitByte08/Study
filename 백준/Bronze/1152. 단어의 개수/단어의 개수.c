#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int cnt=0,i;
    char ch = ' ';
    char str[1000002] = {'\0',};
    fgets(str,1000002,stdin);
    for(i=0;i<strlen(str);i++){
        //printf("%c %c\n",str[i],ch);
        if((ch == ' ')&&(str[i]!=' '&&str[i]!='\0'&&str[i]!='\n')){
            cnt++;
            //printf("%d\n",i);
        }
        ch = str[i];
    }
    printf("%d",cnt);
    return 0;
}
