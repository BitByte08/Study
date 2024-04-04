#include <stdio.h>
int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(void){
    int a,b,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n",lcm(a,b));
    }

    return 0;
}