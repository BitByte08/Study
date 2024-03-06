#include <stdio.h>

int main(void){
    int n,m,i,j,loop,temp,loop2;
    int arr[101] = {0};
    scanf("%d %d",&n,&m);
    for(loop=1;loop<=n;loop++){
        arr[loop] = loop;
    }
    for(loop=1;loop<=m;loop++){
        scanf("%d %d",&i,&j);
        if (j-i==1) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }else if((j-i+1)%2==0&&i!=j){
            for(loop2 = 0;i-j!=1;loop2++){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }else{
            for(loop2 = 0;j!=i;loop2++){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
    }
    for(loop=1;loop<=n;loop++){
        printf("%d ",arr[loop]);
    }
}
