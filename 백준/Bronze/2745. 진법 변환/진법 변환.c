#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
    char str[100] = {};
    int n,res=0;
    long int i,j;
    scanf("%s %d",str,&n);
    for(i=strlen(str)-1;i>=0;i--){
        char a = str[i];
        int b = 0;
        int c = 1;
        if(a>='0'&&a<='9'){
            b=a-'0';
        }else if(a>='A'&&a<='Z'){
            b=(a-'A') + 10;
        }
        for(j=strlen(str)-1;j>i;j--){
            c*=n;
        }
        res+=b*c;
    }
    printf("%d",res);
    return 0;
}
