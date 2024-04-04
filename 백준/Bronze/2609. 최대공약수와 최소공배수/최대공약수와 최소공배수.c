#include <stdio.h>
int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int var = gcd(a,b);
    printf("%d\n%d",var,b*a/var);
    return 0;
}