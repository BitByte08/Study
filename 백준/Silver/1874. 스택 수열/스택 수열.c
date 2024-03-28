#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d",&n);
    int *list = (int*)calloc(n+1,sizeof(int));
    int *stack= (int*) calloc(n+1,sizeof(int));
    char *res = (char*) calloc((n+1)*2,sizeof(char));
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    int num=0;//수열에 들어갈 1부터 n사이의 수
    int p=0;//스텍 위치
    i=0;//입력 리스트 인덱스
    int cnt=0;//정답 인덱스
    while(1){
        if(i==n){
            for(int j=0;j<cnt;j++) {
                printf("%c\n",res[j]);
            }
            break;
        }
        if(num>n){
            printf("NO");
            break;
        }
        if(stack[p]==0){//push
            stack[p]=++num;
            res[cnt++]='+';
        }
        if(stack[p]==list[i]){//pop
            i++;
            stack[p]=0;
            res[cnt++]='-';
            if(p>0){//값을 pop한 후 이전 스텍으로 이동
                p--;
            }
        }else{//해당없으면 다음 스텍
            p++;
        }
    }
    return 0;
}