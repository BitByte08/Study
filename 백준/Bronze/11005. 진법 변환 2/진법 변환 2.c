#include <stdio.h>
#include <stdlib.h>
//44100 * 16 * 2 * 1
//h, b, c, s 가 공백을 두고 입력된다.
//h는 48,000이하, b는 32이하(단, 8의배수), c는 5이하, s는 6,000이하의 자연수이다.
int main(void){
    unsigned int n,m;
    int i,b,len=0;
    scanf("%d %d",&n,&b);
    m=n;
    char arr[31]={};
    for(int i=0;n>=b;i++){
        arr[i]=n%b>9?n%b+55:n%b+48;
        n/=b;
        len++;
    }
    arr[len]=n%b>9?n%b+55:n%b+48;
    for(i=len;i>=0;i--){
        printf("%c",arr[i]);
    }
    return 0;
}

//17325410
