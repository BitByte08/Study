#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char str[1000002];
    int max=0,max_cnt=0,idx=0,j;
    scanf("%s",str);
    long long int len= (strlen(str));
    int arr[26] = {};
    long long int i;
    for(i=0;i<len;i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i] -= 32;
            //printf("%c\n",str[i]);
        }
        arr[str[i]-'A']++;
    }
    for(j=0;j<26;j++){
        //printf("%d\n",arr[j]);
        if(arr[j]==max){
            max_cnt++;
        }else if(arr[j]>max){
            max=arr[j];
            idx=j;
            max_cnt=0;
        }
    }
    if(!max_cnt){
        printf("%c",idx+'A');
    }else{
        printf("?");
    }
    return 0;
}
