#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char str[1001];
    int i=0;
    scanf("%s",str);
    scanf("%d",&i);
    char a = str[i-1];
    printf("%c",a);
    return 0;
}
