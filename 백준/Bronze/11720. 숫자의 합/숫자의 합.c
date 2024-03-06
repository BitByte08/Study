#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int n,cnt=0,i;
    char arr[100];
    scanf("%d",&n);
    scanf("%s",arr);
    for(i=0;arr[i]!='\0';i++){
        cnt+=arr[i]-'0';
    }
    printf("%d",cnt);
    return 0;
}
