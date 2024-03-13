#include <stdio.h>
#include <stdlib.h>
/*
 첫 번째 숫자가 두 번째 숫자의 약수이다.
 첫 번째 숫자가 두 번째 숫자의 배수이다.
 첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.
 */
int main(void){
    int a=1,b=1;
    while(1){
        scanf("%d %d",&a,&b);
        if(a!=0&&b!=0){
            if(b%a==0){
                printf("factor");
            }else if(a%b==0){
                printf("multiple");
            }else{
                printf("neither");
            }
        }else{
            break;
        }
        printf("\n");
    }
    return 0;
}
