#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char str[101]={};
    int i,cnt=0;
    scanf("%s",str);
    int len = strlen(str);
    for(i=0;i<len;i++){
        cnt++;
        if(str[i] == 'c'){
            if(str[i+1]=='='){
                i++;
            }else if(str[i+1]=='-'){
                i++;
            }
        }else if(str[i]=='d'){
            if(str[i+1]=='-'){
                i++;
            }else if(str[i+1] == 'z'&&str[i+2]=='='){
                i+=2;
            }
        }else if(str[i]=='s'&&str[i+1]=='='){
            i++;
        }else if(str[i]=='z'&&str[i+1]=='='){
            i++;
        }else if (str[i]=='l'&&str[i+1]=='j'){
            i++;
        }else if(str[i]=='n'&&str[i+1]=='j'){
            i++;
        }
    }
    printf("%d",cnt);
    return 0;
}
