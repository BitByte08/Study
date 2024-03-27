#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(char arr[1000001]){
    int a=0,i;
    for(i=0;i<strlen(arr);i++){
        a+=arr[i]-'0';
    }
    
    return a;
}
void inttostr(char *arr,int a){
    int i = 0;
    while(a>0){
        arr[i]=(a%10)+'0';
        i++;
        a/=10;
    }
    arr[i]=NULL;
}
int main(void){
    char arr[1000001]="";
    int cnt=0,a;
    scanf("%s",arr);
    if(strlen(arr)==1){
        a=add(arr);
    }else{
        a=10;
    }
    while(strlen(arr)>1){
        a=add(arr);
        inttostr(arr,a);
        cnt++;
    }
    printf("%d\n",cnt);
    printf("%s",a%3==0?"YES":"NO");
    return 0;
}

