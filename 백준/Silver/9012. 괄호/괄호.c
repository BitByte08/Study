#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int n,result=0;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        result=0;
        char VPS[21]="";
        scanf("%s",VPS);
        int len = strlen(VPS);
        for(j=0;j<len;j++){
            if(VPS[j]=='('){
                result++;
            }else if(VPS[j]==')'){
                result--;
            }
            if(result<0){
                break;
            }
            //printf("%d\n",result);
        }
        printf("%s\n",result?"NO":"YES");
    }
    return 0;
}
