#include <stdio.h>

int connect[101][101]={};
int visited[101]={};
int cnt=0;
int com,t;
void f(int a){
    int i;
    for(i=0;i<=com;i++){
        if(connect[a][i]==0)continue;
        if(visited[i]==1)continue;
        visited[i]=1;
        ++cnt;
        f(i);
    }
}
int main(void){
    int a,b;
    int i;
    scanf("%d %d",&com,&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        connect[a][b]=1;
        connect[b][a]=1;
    }
    f(1);
    printf("%d",cnt!=0?cnt-1:0);
    return 0;
}