#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
    int i,t,c,q=0,d=0,n=0,p=0;//025 01 005 001
    scanf("%d",&t);
    for(i=0;i<t;i++){
        q=d=n=p=0;
        scanf("%d",&c);
        while(c!=0){
            if(c>=25){
                c-=25;
                q++;
            }else if(c>=10){
                c-=10;
                d++;
            }else if(c>=5){
                c-=5;
                n++;
            }else if(c>=1){
                c-=1;
                p++;
            }
        }
        printf("%d %d %d %d\n",q,d,n,p);
    }
    return 0;
}
