#include <stdio.h>

int main(){
    int h,m,time;
    scanf("%d %d",&h,&m);
    scanf("%d",&time);
    h += time / 60;
    m += time % 60;
    if(m>59){
        m=m-60;
        h++;
        if(h>23){
            h-=24;
        }
    }
    if(h>23){
        h-=24;
    }
    printf("%d %d",h,m);
    return 0;
}