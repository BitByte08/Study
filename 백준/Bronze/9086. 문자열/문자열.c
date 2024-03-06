#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int t,i;
    char str[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",str);
        printf("%c",str[0]);
        printf("%c\n",str[strlen(str)-1]);
    }
    return 0;
}
