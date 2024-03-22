#include <stdio.h>

int main(void){
    int n,m,res,min=300000,a=1;
    scanf("%d %d",&n,&m);
    int arr[n];
    int i,j,k;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                res=m-(arr[i]+arr[j]+arr[k]);
                    if(min>=res&&res>=0){
                        a=1;
                        min=res*a;
                    }
            }
        }
    }
    printf("%d",m-(min*a));
    return 0;
}
