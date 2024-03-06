#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int r,a,i,j,k;
    char s[20];
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %s",&r,s);
        for(j=0;j<strlen(s);j++){
            for(k=0;k<r;k++){
                printf("%c",s[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
