#include <stdio.h>

int main(void)
{
    int n,m,i,j,temp;
    scanf("%d %d",&n,&m);
    int arr[101][101];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr[i][j]=0;
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&temp);
            arr[i][j]+=temp;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
