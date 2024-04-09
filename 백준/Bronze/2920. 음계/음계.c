#include <stdio.h>

int main(){
    int i,ascending=0, descending=0;
    int arr[8]={};
    for(i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<7;i++){
        if(arr[i]+1==arr[i+1]){
            ascending++;
        }else if(arr[i]-1==arr[i+1]){
            descending++;
        }
    }
    int result = ascending>descending?ascending:descending;
    printf("%s",result==7?(ascending>descending?"ascending":"descending"):"mixed");
    return 0;
}

